##############################################
# EEL Test Program
##############################################

# Test U-type instructions
auipc ra, 256
nop 
nop
lui x9, 6
nop
nop

# Test I-type instructions
addi x1, x1, 100
nop
nop
addi x2, x2, 100
nop
nop
nop
sw   x2, 0(x9)
nop 
nop
lw   x3, 0(x9)
nop
nop
nop
slti x4, x3, 101
nop
nop 
xori x3, x2, 0xFF
