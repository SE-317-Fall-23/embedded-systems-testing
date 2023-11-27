### Smart Thermostat Testing

 In this assignment, you'll be working with a thermostat module designed to adjust and manage temperatures within a defined range. The provided code includes two key components: the [temperature_controller](src/temperature_controller.c) and the [thermostat](src/thermostat.c).

The temperature_controller module enables you to set and retrieve temperature values, providing a foundational functionality for temperature management. This module would interact with the thermostat module which introduces more advanced temperature adjustment features.

The thermostat module allows users to dynamically adjust temperatures based on predefined logic. By default, a fixed offset of 2 degrees Celsius is applied to the user input. Additionally, users have the flexibility to define custom offsets, providing a personalized touch to temperature adjustments.

Your task involves writing tests for these modules to ensure their proper functioning in various scenarios. Focus on validating the core features, such as accurate temperature adjustment, adherence to specified temperature ranges, and seamless integration between the temperature_controller and thermostat.

Consider edge cases, normal use cases, and potential invalid inputs during your testing process. The goal is to create a suite of tests that assesses the reliability of these components.

### Setup command
* Use the codespaces environment to write your code
* In your Github repo, click Code dropdown, then click Codespaces and click Create codespace on master 
* Run `make test` in the terminal to compile the project. Then run '.\thermostat_test' to run the tests


