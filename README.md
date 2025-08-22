# EEL
The EEL-32 is a pipelined 32-bit RV32I processor. Though the EEL-32 resembles Cal Poly SLO's OTTER core, it will have multiple new ISA extensions as well as an interrupt system. The goal of the EEL is to extend the OTTER, and achieve RTOS compatibility. A secondary goal of the EEL is to be the basis a later, ASIC hardened revision.
## ISA Extensions
The EEL will target several new extensions:
<br>Zifencei
<br>Zicsr
<br>M - multiply/divide
<br>A - atomic
<br>C - compressed

## Design Goals
Though many iterations of the OTTER exist, no accessible version has been developed usign Design-for-Test (DFT) or extended to this extent. The basic OTTER many are familiar with simply implements a set of arithmetic operations, control-transfer operations, and memory/register read/write operations. With DFT principles in mind, the EEL will be developed using parameterizable modules, with well defined net names. 

## Current Modules (Verified):

## Current Modules (Unverified):
- 4 to 1 MUX
- 2 to 1 MUX
- Program Counter
- Instruction Memory
- Data Memory
- Register File
- Instruction Decoder
- Immediate Extender
- Branch Generator
- Arithmetic Logic Unit
- Hazard Unit
- Branch Predictor
- CSR
## Current Schematic
