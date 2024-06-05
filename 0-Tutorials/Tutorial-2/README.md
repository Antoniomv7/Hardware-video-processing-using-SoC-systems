# Tutorial 2: Using Verilog and Vivado to Control LEDs on PYNQ-Z2

This tutorial continues from the first, introducing more advanced hardware control on the PYNQ-Z2 board using Verilog and Vivado. It follows the detailed steps provided in the accompanying PDF document.

## Overview

In this tutorial, you will learn how to:
- Write Verilog code to control LEDs.
- Use Vivado to create, synthesize, and implement the design.
- Deploy and test your design on the hardware.

## Prerequisites

- PYNQ-Z2 board
- Vivado Design Suite
- Basic knowledge of Verilog
- Familiarity with FPGA design flow

## Steps

### 1. Install Vivado and Board Files
- **Vivado Installation**: Download and install the Xilinx Vivado IDE from the [Xilinx website](https://www.xilinx.com/support/download.html). Ensure you select the Vivado HL WebPACK edition.
- **Board Files**: Download the PYNQ-Z2 board files from [TUL Embedded](https://www.tulembedded.com/FPGA/ProductsPynq-Z2.html). Copy these files to the appropriate Vivado directory.

### 2. Create a New Vivado Project
- **New Project Setup**: Open Vivado and create a new RTL project. Select the PYNQ-Z2 board and configure the project settings as described in the PDF.

### 3. Write Verilog Code
- **Module Creation**: Write a Verilog module to control LEDs based on switch inputs. Define the input and output ports, and implement the logic to turn LEDs on and off based on the state of the switches.

### 4. Synthesize and Implement the Design
- **Synthesis**: Run the synthesis process in Vivado.
- **Implementation**: Implement the design, ensuring all constraints are met.

### 5. Generate Bitstream and Program the FPGA
- **Bitstream Generation**: Generate the bitstream file in Vivado.
- **Programming**: Load the bitstream onto the PYNQ-Z2 board and test the functionality.

## Resources

- Detailed guide: [Using Verilog and Vivado](https://blog.umer-farooq.com/a-pynq-z2-guide-for-absolute-dummies-part-ii-using-verilog-and-vivado-to-burn-code-on-pynq-d856f79948b1)
- [Anexo: Tutorial parte 2](../Anexo.%20Tutorial%20de%20conexi%C3%B3n%20y%20funcionamiento%20de%20la%20Pynq-Z2.pdf)

## Contributing

Contributions to improve this tutorial are welcome. Please fork the repository, make your changes, and submit a pull request.

## License

This tutorial is provided under the MIT License. See the [LICENSE](../../LICENSE) file for more details.

## Contact

For any questions or feedback, please open an issue on the main repository.

---

© 2024 Antoniomv7. All rights reserved.
