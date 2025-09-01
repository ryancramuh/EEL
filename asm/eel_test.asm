#######################################
# EEL test for Hazards (basic)
# for now, trying to handle reg and imm forwarding

lui x10, 6
addi x10, x10, 16
add x9, x10,x0
sw x10, 0(x10)
lw x2, 0(x10)

# order of events:
# x10 -> 6000
# x10 -> 6010
# x9  -> 6010 
# x2  -> 6010 

# 2 uses back to back
# hazards involving rs1 and rs2 

add x3, x2, x9 # rd = x3
add x2, x3, x3 # rs1 and rs2 rely on reg with pending write
add x1, x3, x2 # rs1 and rs2 rely on regs with pending writes

# order of events:
# x3  -> c020
# x2  -> 18040
# x1  -> 24060


addi x3, x3, 200
sub x2, x2, x9
sub x2, x2, x9
sw x3, 0(x2)
lw x1, 0(x2)
mv x2,x1
lw x4, 0(x1)
addi x4, x1, 200

# order of events:
# x3  -> c0e8
# x2  -> c020
# x1  -> c0e8
# x2  -> c0e8
# x4  -> 0000
# x4  -> c1b0

# final results: (of hazard test stage 1)
# x1  = c0e8
# x2  = c0e8
# x3  = c0e8
# x4  = c1b0
# x9  = 6010
# x10 = 6010
