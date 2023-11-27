# Smart Thermostat Testing

In this assignment, you will work with a thermostat module designed to dynamically adjust and manage temperatures within a defined range. The provided code includes two essential components: the [temperature_controller](src/temperature_controller.c) and the [thermostat](src/thermostat.c).

## Components Overview:

### 1. temperature_controller Module
The `temperature_controller` module provides fundamental functionality for setting and retrieving temperature values. Your task is to write comprehensive tests for this module, focusing on:

- **Setting and Retrieving Values:** Verify that the module accurately sets and retrieves temperature values.

### 2. thermostat Module
The `thermostat` module introduces advanced temperature adjustment features. By default, a fixed offset of 2 degrees Celsius is applied to user input. Users can also define custom offsets for personalized temperature adjustments. Your testing for this module should encompass:

- **Default Offset Application:** Confirm that the thermostat module correctly applies the default offset of 2 degrees Celsius to user input.
- **Custom Offset Configuration:** Test the ability of users to define custom offsets and ensure that the thermostat adjusts temperatures accordingly.
- **Temperature Range Adherence:** Validate that the thermostat maintains temperatures within the specified range.
- **Integration Testing:** Assure seamless integration between the `temperature_controller` and `thermostat` modules by thoroughly testing the `adjust_temperature` function.

## Testing Guidelines:

1. **Edge Cases:**
   - Test scenarios at the lower and upper bounds of the temperature range.
   - Assess how the system handles extreme temperatures.

2. **Normal Use Cases:**
   - Test typical temperature adjustments within the standard range.
   - Evaluate responses to common user inputs.

3. **Invalid Inputs:**
   - Examine how the system handles unexpected or invalid inputs.
   - Ensure that error-handling mechanisms are effective.
  
## Testing Library
- This repo uses [Unity Testing Framework](https://www.throwtheswitch.org/unity) (not to be confused with Unity gaming engine)
- Refer to the link above for documentation on how to write the tests.

### Setup command
* Use the codespaces environment to write your code. To use it, open your Github repo, click Code dropdown, then click Codespaces and click Create codespace on master 
* Run `make` in the terminal to compile the project. Then run '.\thermostat_test' to run the tests
* You can run this on your local computer if you have GCC (the compiler) setup.
* There is one failing test in the repo. So the builds on the Github actions will fail. Once you fix the test, the build will pass.


