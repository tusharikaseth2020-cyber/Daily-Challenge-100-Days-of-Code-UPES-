/*Q1 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum.*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);
    int sum = a + b;
    printf(" THE SUM IS :%d", sum);
    return 0;
}