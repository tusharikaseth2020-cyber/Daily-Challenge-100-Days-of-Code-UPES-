/*Write a program to swap two numbers using a third variable.

Input 1:
3 5
Output 1:
After swap: 5 3
Input 2:
-1 1
Output 2:
After swap: 1 -1*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", a, b);
    return 0;
}