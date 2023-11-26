#include "thermostat.h"

float calculate_temperature(float user_input) {
    // Simple logic: Assume user_input is a temperature value in Celsius
    // and the thermostat adds 2 degrees to it
    float adjusted_temperature = user_input + 2.0;

    // Ensure the temperature is within a reasonable range
    if (adjusted_temperature < 0.0) {
        return 0.0;
    } else if (adjusted_temperature > 100.0) {
        return 100.0;
    } else {
        return adjusted_temperature;
    }
}

float calculate_temperature_with_offset(float user_input, float offset) {
    // Adjust the temperature by adding the user-defined offset
    float adjusted_temperature = user_input + offset;

    // Ensure the temperature is within a reasonable range
    if (adjusted_temperature < 0.0) {
        return 0.0;
    } else if (adjusted_temperature > 100.0) {
        return 100.0;
    } else {
        return adjusted_temperature;
    }
}