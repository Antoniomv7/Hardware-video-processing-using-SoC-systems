# Tutorial 3: Configuring a Clock on the PYNQ-Z2 FPGA

This tutorial builds on the previous ones, focusing on configuring clocks on the PYNQ-Z2 board using Vivado. It follows the detailed steps provided in the accompanying PDF document.

## Overview

In this tutorial, you will learn how to:
- Use the PYNQ-Z2's 125 MHz clock source.
- Implement clock dividers to achieve various frequencies.
- Write Verilog code to make LEDs blink at different rates.
- Deploy and test your design on the hardware.

## Prerequisites

- PYNQ-Z2 board
- Vivado Design Suite
- Basic knowledge of Verilog
- Familiarity with FPGA design flow

## Steps

### 1. Create a New Vivado Project
- **New Project Setup**: Open Vivado and create a new RTL project. Select the PYNQ-Z2 board and configure the project settings as described in the PDF.

### 2. Design the Clock Divider Module
- **Module Creation**: Create a Verilog module named `ClockDivider` with an input clock and an output clock. Implement the logic to divide the input clock to produce slower output clocks.

### 3. Configure the Project
- **Input and Output Ports**: Define the input and output ports for the `ClockDivider` module. Ensure the input clock is configured to 125 MHz.
- **Instantiation**: Instantiate multiple `ClockDivider` modules to generate clocks of different frequencies for different LEDs.

### 4. Synthesize and Implement the Design
- **Synthesis**: Run the synthesis process in Vivado.
- **Implementation**: Implement the design, ensuring all constraints are met.

### 5. Generate Bitstream and Program the FPGA
- **Bitstream Generation**: Generate the bitstream file in Vivado.
- **Programming**: Load the bitstream onto the PYNQ-Z2 board and test the functionality of the blinking LEDs.

## Resources

- Detailed guide: [Using FPGA Clock](https://blog.umer-farooq.com/a-pynq-z2-guide-for-absolute-dummies-part-iii-tick-tock-using-fpga-clock-33a34ef3f51a)
- [Anexo: Tutorial parte 3](../Anexo.%20Tutorial%20de%20conexi%C3%B3n%20y%20funcionamiento%20de%20la%20Pynq-Z2.pdf)

## Contributing

Contributions to improve this tutorial are welcome. Please fork the repository, make your changes, and submit a pull request.

## License

This tutorial is provided under the MIT License. See the [LICENSE](../../LICENSE) file for more details.

## Contact

For any questions or feedback, please open an issue on the main repository.

---

© 2024 Antoniomv7. All rights reserved.
