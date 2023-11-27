#include "unity.h"
#include "../src/thermostat.h"
#include "../src/temperature_controller.h"

void setUp() {
    set_temperature(24.0);
    // Optional: Set up resources before each test
}

void tearDown() {
    // Optional: Clean up resources after each test
}

void test_set_get_temperature() {
    set_temperature(30.0);
    TEST_ASSERT_EQUAL_FLOAT(31.0, get_current_temperature());
}

void test_calculate_temperature() {
    // Test the calculate_temperature function with different inputs

    // Test case 1: Normal input
    TEST_ASSERT_EQUAL_FLOAT(25.0, calculate_temperature(23.0));

    // Test case 2: Negative input
    TEST_ASSERT_EQUAL_FLOAT(0.0, calculate_temperature(-2.0));

    // Test case 3: Upper limit
    TEST_ASSERT_EQUAL_FLOAT(100.0, calculate_temperature(98.0));
}

void test_adjust_temperature() {
// Write test for adjust temprature
}

int main() {
    UNITY_BEGIN();

    // Run the tests
    // Any new test file should be added here
    RUN_TEST(test_calculate_temperature);
    RUN_TEST(test_adjust_temperature);
    RUN_TEST(test_set_get_temperature);

    // Close the Unity Test Framework
    return UNITY_END();
}
