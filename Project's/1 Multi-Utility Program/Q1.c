#include <stdio.h>

/*
 Q1. Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
    formula: °F = (9/5 × °C) + 32

	Example:
	Input: The temperature in Celsius: 38
	Output: The temperature in Fahrenheit: 100.4
 */
 
 main() {
	
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("The temperature in Fahrenheit: %0.1f\n",fahrenheit);

}

