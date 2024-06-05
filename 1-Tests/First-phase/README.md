# First Phase: Utilization of the HDMI Port

This tutorial focuses on utilizing the HDMI port on the PYNQ-Z2 board for video output. It follows the detailed steps provided in the section 3.2.2 "Utilización del Puerto HDMI" from the accompanying PDF document "Memoria".

## Overview

In this tutorial, you will learn how to:
- Configure the HDMI port on the PYNQ-Z2 board.
- Use Vivado to set up the necessary hardware configurations.
- Deploy and test your design on the hardware.

## Prerequisites

- PYNQ-Z2 board
- Vivado Design Suite
- Jupyter Notebook
- Basic knowledge of Verilog or VHDL and Python
- HDMI monitor and HDMI cable

## Steps

### 1. Create a New Vivado Project
- **New Project Setup**: Open Vivado and create a new RTL project. Select the PYNQ-Z2 board and configure the project settings as described in the PDF.

### 2. Configure HDMI Output
- **HDMI IP Cores**: Add and configure the necessary HDMI IP cores in your Vivado project.
- **Connections**: Connect the HDMI IP cores to the processing system and configure the necessary parameters.

### 3. Write Verilog or VHDL Code
- **Module Creation**: Write Verilog or VHDL code to manage HDMI data streams.
- **Implement Logic**: Implement the necessary logic to handle video signals and output through the HDMI port.

### 4. Synthesize and Implement the Design
- **Synthesis**: Run the synthesis process in Vivado.
- **Implementation**: Implement the design, ensuring all constraints are met.

### 5. Generate Bitstream and Program the FPGA
- **Bitstream Generation**: Generate the bitstream file in Vivado.
- **Programming**: Load the bitstream onto the PYNQ-Z2 board and connect it to an HDMI monitor to test the functionality.

## Resources

- Detailed guide: Refer to section 3.2.2 "Utilización del Puerto HDMI" in the provided PDF "Memoria".

## Contributing

Contributions to improve this tutorial are welcome. Please fork the repository, make your changes, and submit a pull request.

## License

This tutorial is provided under the MIT License. See the [LICENSE](../../LICENSE) file for more details.

## Contact

For any questions or feedback, please open an issue on the main repository.

---

© 2024 Antoniomv7. All rights reserved.
