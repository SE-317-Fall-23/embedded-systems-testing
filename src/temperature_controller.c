#include "temperature_controller.h"

static float current_temperature = 20.0; // Default starting temperature

void set_temperature(float new_temperature) {
    current_temperature = new_temperature;
}

float get_current_temperature(void) {
    return current_temperature;
}

void adjust_temperature(float delta) {
    // Adjust the temperature by adding the delta value
    current_temperature += delta;

    // Ensure the temperature is within a reasonable range (e.g., 0 to 100 degrees Celsius)
    if (current_temperature < 0.0) {
        current_temperature = 0.0;
    } else if (current_temperature > 100.0) {
        current_temperature = 100.0;
    }
}
