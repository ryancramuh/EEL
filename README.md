# EEL
The EEL-32I is a pipelined 32-bit RV32I processor. The goal of the EEL is to be the basis for a later, ASIC hardened drop-in core.

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
- 4 to 1 MUX (n-bit)
- 2 to 1 MUX (n-bit)
- Program Counter (n-bit)
- Instruction Memory (configurable, set to 64kB)
- Data Memory (configurable, set to 64kB)
- Register File (32 x 32)
- Instruction Decoder 
- Immediate Extender
- Arithmetic Logic Unit

## Current Status:
- As of 9/1/2025, hazards are being implemented to the core.
- Limited cases of hazards have been tested, with no control transfer instructions implemented. 
- The next step is to validate the current Hazard Unit and implement jumps/branches 
## Original Schematic
<img src="./images/EEL_DIAGRAM.svg" alt="Project logo" width="2000">

## Hazard Forwarding Schematic 
<img src="./images/EEL_DIAGRAM_HAZ.svg" alt="Project logo" width="2000">
