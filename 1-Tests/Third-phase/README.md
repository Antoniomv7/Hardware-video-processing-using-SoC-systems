# Third Phase: Modifications to the Original Overlay

This tutorial focuses on modifying the original overlay on the PYNQ-Z2 board to enhance its functionality. It follows the detailed steps provided in section 3.2.4 "Modificaciones en el overlay original" from the accompanying PDF document "Memoria".

## Overview

In this tutorial, you will learn how to:
- Modify the original overlay design on the PYNQ-Z2 board.
- Implement and test the modifications.
- Utilize the modified overlay for advanced video processing tasks.

## Prerequisites

- PYNQ-Z2 board
- Vivado Design Suite
- Basic knowledge of Verilog or VHDL
- Understanding of FPGA design and overlay concepts

## Steps

### 1. Review the Original Overlay Design
- **Understand the Current Overlay**: Analyze the existing overlay design to understand its functionality and components.
- **Identify Modification Areas**: Determine which parts of the overlay need modifications based on the requirements outlined in the PDF.

### 2. Modify the Overlay in Vivado
- **Open the Original Project**: Open the original overlay project in Vivado.
- **Implement Changes**: Make the necessary modifications to the overlay. This could include adding new IP cores, changing existing connections, or updating logic.
- **Synthesize and Implement**: Run synthesis and implementation processes to ensure the modifications are correctly applied.

### 3. Validate the Modified Overlay
- **Simulation**: Simulate the modified design to verify its functionality.
- **Debugging**: Debug any issues that arise during the simulation to ensure the design works as intended.

### 4. Generate Bitstream and Program the FPGA
- **Bitstream Generation**: Generate the bitstream file for the modified overlay.
- **Programming**: Load the bitstream onto the PYNQ-Z2 board and test the new functionality.

### 5. Test the Modified Overlay
- **Functional Testing**: Perform functional tests to ensure the overlay operates correctly with the new modifications.
- **Performance Evaluation**: Evaluate the performance of the modified overlay and compare it with the original design.

## Resources

- Detailed guide: Refer to section 3.2.4 "Modificaciones en el overlay original" in the provided PDF "Memoria".

## Contributing

Contributions to improve this tutorial are welcome. Please fork the repository, make your changes, and submit a pull request.

## License

This tutorial is provided under the MIT License. See the [LICENSE](../../LICENSE) file for more details.

## Contact

For any questions or feedback, please open an issue on the main repository.

---

© 2024 Antoniomv7. All rights reserved.
