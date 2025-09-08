#######################################
# EEL test for Hazards (basic)
# for now, trying to handle reg and imm forwarding

lui x10, 6
addi x10, x10, 16
add x9, x10,x0
sw x10, 0(x10)
lw x2, 0(x10) # load -> use
add x3, x2, x9 # rd = x3
add x2, x3, x3 # rs1 and rs2 rely on reg with pending write
add x1, x3, x2 # rs1 and rs2 rely on regs with pending writes

# order of events:
# x10 -> 6000
# x10 -> 6010
# x9  -> 6010 
# x2  -> 6010 

# 2 uses back to back
# hazards involving rs1 and rs2 

# order of events:
# x3  -> c020
# x2  -> 18040
# x1  -> 24060

addi x3, x3, 200
sub x2, x2, x9
sub x2, x2, x9 # hazard
sw x3, 0(x2) # hazard 
lw x1, 0(x2) # hazard
mv x1,x2     # not-hazard
lw x4, 0(x1) # load
sb x4, 0(x4) # use
sh x4, 4(x4) # use
sw x4, 8(x4) # use

lb x5, 0(x4)
lh x6, 4(x4)
lw x7, 8(x4) 
jal done
addi x7, x1, 201


# final results: (of hazard test stage 1)
# x1  = c0e8
# x2  = c0e8
# x3  = c0e8
# x4  = c1b0
# x5  = 0xffff00e8
# x6  = 0xffffc0e8
# x7  = 0x0000c0e8
# x9  = 6010
# x10 = 6010
done:
mv x1, x0
mv x2, x0
mv x3, x0
mv x4, x0
mv x5, x0
mv x6, x0
mv x7, x0
mv x8, x0
mv x9, x0

# hazard test stage 2


