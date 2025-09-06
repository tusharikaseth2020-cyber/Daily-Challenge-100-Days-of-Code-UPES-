/* Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);
    int sum, diff, prod, quo;
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quo = a / b;
    printf("%d\n", sum);
    printf("%d\n", diff);
    printf("%d\n", prod);
    printf("%d\n", quo);
    return 0;
}