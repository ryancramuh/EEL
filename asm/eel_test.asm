#######################################
# EEL test for Hazards (basic)
# for now, trying to handle reg and imm forwarding

lui x10, 6
addi x10, x10, 16
add x9, x10,x0
sw x10, 0(x10)
lw x2, 0(x10)


# 2 uses back to back
# hazards involving rs1 and rs2 

add x3, x2, x9 # rd = x3
add x2, x3, x3 # rs1 and rs2 rely on reg with pending write
add x1, x3, x2 # rs1 and rs2 rely on regs with pending writes

# at this point you should have 
# x10 = 6010
# x9 = 6010
#
