# Negative Filter: Software and Hardware Implementation

This section focuses on the implementation of a negative filter for video processing on the PYNQ-Z2 board. It includes both software and hardware implementations, following the detailed steps provided in the PDF document "Memoria".

## Overview

In this section, you will learn how to:
- Implement a negative filter in software using Jupyter with the original PYNQ-Z2 overlay.
- Develop and test a hardware version of the negative filter using Vitis HLS and Vivado.
- Compare the performance of the software and hardware implementations.

## Prerequisites

- PYNQ-Z2 board
- Vivado Design Suite, Vitis HLS and Jupyter Notebook
- Basic knowledge of Python, C/C++ programming, and Verilog/VHDL
- Familiarity with FPGA design and video processing

## Sections

### 1. Software Implementation

#### 1.1 Development Environment Setup
- **Install Necessary Tools**: Ensure all required tools, including the Vivado Design Suite and Vitis HLS, are installed on your computer.
- **Board Setup**: Connect the PYNQ-Z2 board to your computer and configure it as described in the PDF.

#### 1.2 Implementing the Negative Filter in Software
- **Access Jupyter Notebook**: Open a web browser and connect to the PYNQ-Z2 board's Jupyter Notebook interface.
- **Write Python Code**: Develop the negative filter algorithm in Python using the original PYNQ-Z2 overlay.
- **Testing**: Test the software implementation with sample video data to ensure it functions correctly.

#### 1.3 Performance Analysis
- **Testing**: Perform tests to evaluate the performance of the software implementation.
- **Analysis**: Analyze the processing speed and resource usage of the software filter.

### 2. Hardware Implementation

#### 2.1 Development in Vitis HLS
- **Design the Filter**: Use Vitis HLS to develop the negative filter for hardware implementation.
- **Optimization**: Optimize the design for performance and resource usage.
- **Validation**: Validate the design through simulation in Vitis HLS.

#### 2.2 Integration in Vivado
- **Import IP Core**: Import the IP core generated by Vitis HLS into a Vivado project.
- **System Integration**: Integrate the IP core with other components in the Vivado project.
- **Synthesis and Implementation**: Run the synthesis and implementation processes in Vivado.

#### 2.3 Deployment and Testing
- **Bitstream Generation**: Generate the bitstream file for the design.
- **Programming the FPGA**: Load the bitstream onto the PYNQ-Z2 board.
- **Validation**: Test the hardware implementation of the negative filter to ensure it works as expected.

#### 2.4 Performance Evaluation
- **Comparison with Software**: Compare the performance of the hardware implementation with the software version.
- **Optimization**: Identify areas for further optimization in the hardware design.

## Resources

- Detailed guides: Refer to the sections related to the negative filter in the provided PDF "Memoria".

## Contributing

Contributions to improve this section are welcome. Please fork the repository, make your changes, and submit a pull request.

## License

This section is provided under the MIT License. See the [LICENSE](../../LICENSE) file for more details.

## Contact

For any questions or feedback, please open an issue on the main repository.

---

© 2024 Antoniomv7. All rights reserved.
