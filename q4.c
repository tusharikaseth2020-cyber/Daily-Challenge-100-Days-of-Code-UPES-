/*
Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius.

Input 1:
7
Output 1:
Area=153.94, Circumference=43.96
Input 2:
3
Output 2:
Area=28.27, Circumference=18.85*/
#include <stdio.h>
int main()
{
    float a;
    printf("Enter the value of a");
    scanf("%f", &a);

    float area, circum;
    area = (3.14 * a * a);
    circum = (2 * 3.14 * a);
    printf("The area is:%.2f\n", area);
    printf("The circumference is:%.2f\n", circum);
    return 0;
}