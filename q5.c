/*
Q5 (User Inputs, Operations & Output)
Write a program to convert temperature from Celsius to Fahrenheit.

Input 1:
0
Output 1:
Fahrenheit=32
Input 2:
100
Output 2:
Fahrenheit=212*/
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius:");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("The temperature in Fahrenheit is:%.2f\n", fahrenheit);
    return 0;
}