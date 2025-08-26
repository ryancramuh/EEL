##############################################
# EEL Test Program
##############################################

# Test U-type instructions
auipc ra, 256
nop 
nop
lui x9, 4000
nop
nop

# Test I-type instructions
addi x1, x1, 100
nop
nop
slti x2, x1, 101
nop
nop 
xori x3, x2, 0xFF