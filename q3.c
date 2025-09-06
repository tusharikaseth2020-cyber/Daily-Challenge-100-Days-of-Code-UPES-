/*🖥️
Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Input 1:
5 10
Output 1:
Area=50, Perimeter=30
Input 2:
3 7
Output 2:
Area=21, Perimeter=20*/
#include <stdio.h>
int main()
{
    int area, peri;
    int a = 3;
    int b = 7;
    area = a * b;
    peri = 2 * (a + b);
    printf("THE AREA OF THE RECTANGLE IS:%d\n", area);
    printf("THE PERIMETER OF THE RECTANGLE IS:%d\n", peri);
    return 0;
}