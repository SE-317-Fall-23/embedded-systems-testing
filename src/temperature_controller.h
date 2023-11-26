#ifndef TEMPERATURE_CONTROLLER_H
#define TEMPERATURE_CONTROLLER_H

// Function to set the temperature
void set_temperature(float new_temperature);

// Function to get the current temperature
float get_current_temperature(void);

// Function to adjust the temperature
void adjust_temperature(float delta);

#endif /* TEMPERATURE_CONTROLLER_H */
