# Second Phase: First Design in Vitis HLS

This tutorial focuses on creating your first design using Vitis High-Level Synthesis (HLS). It follows the detailed steps provided in the section 3.2.3 "Primer diseño en Vitis HLS" from the accompanying PDF document "Memoria".

## Overview

In this tutorial, you will learn how to:
- Set up and configure Vitis HLS.
- Write C/C++ code for hardware design.
- Synthesize, simulate, and implement your design.
- Deploy and test your design on the PYNQ-Z2 board.

## Prerequisites

- PYNQ-Z2 board
- Vitis HLS and Vivado Design Suite
- Basic knowledge of C/C++ programming
- Familiarity with FPGA design flow

## Steps

### 1. Install and Set Up Vitis HLS
- **Download and Install**: Download Vitis HLS from the [Xilinx website](https://www.xilinx.com/support/download.html) and follow the installation instructions.
- **Configuration**: Set up the environment variables and paths as required for Vitis HLS.

### 2. Create a New Vitis HLS Project
- **New Project Setup**: Open Vitis HLS and create a new project. Configure the project settings as described in the PDF.

### 3. Write C/C++ Code
- **Algorithm Implementation**: Write the C/C++ code for your algorithm. Ensure that your code is compatible with HLS synthesis.
- **Example Code**: Refer to the example code provided in the PDF for guidance.

### 4. Synthesize and Simulate the Design
- **Synthesis**: Run the synthesis process in Vitis HLS to convert the C/C++ code into an RTL implementation.
- **Simulation**: Simulate the synthesized design to verify its functionality.

### 5. Export the IP Core
- **Export**: Export the synthesized design as an IP core that can be used in Vivado.
- **Integration**: Integrate the IP core into a Vivado project for implementation.

### 6. Implement the Design in Vivado
- **Import IP Core**: Import the exported IP core into a new Vivado project.
- **Design Integration**: Connect the IP core to other necessary modules and implement the design.
- **Bitstream Generation**: Generate the bitstream file for the PYNQ-Z2 board.

### 7. Deploy and Test the Design
- **Program FPGA**: Load the bitstream onto the PYNQ-Z2 board.
- **Testing**: Test the design on the hardware to ensure it functions as expected.

## Resources

- Detailed guide: Refer to section 3.2.3 "Primer diseño en Vitis HLS" in the provided PDF "Memoria".

## Contributing

Contributions to improve this tutorial are welcome. Please fork the repository, make your changes, and submit a pull request.

## License

This tutorial is provided under the MIT License. See the [LICENSE](../../LICENSE) file for more details.

## Contact

For any questions or feedback, please open an issue on the main repository.

---

© 2024 Antoniomv7. All rights reserved.
