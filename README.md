# EEL
The EEL-32I is a pipelined 32-bit RV32I processor. The goal of the EEL is to be the basis for a later, ASIC hardened revision.

## ISA Extensions
The EEL will target being the base for several new extensions:
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
- Arithmetic Logic Unit

## Current Schematic
<img src="./images/EEL_DIAGRAM.svg" alt="Project logo" width="2000">
