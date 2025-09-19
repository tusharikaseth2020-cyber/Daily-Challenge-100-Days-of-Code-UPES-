/*
Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int year;
    printf("Enter the year");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("Leap Year");
        return 0;
    }
    else if (year%100==0)
    {
        printf("Not a leap year");
        return 0;
    }
    else if(year%4==0)
    {
        printf("Leap Year");
        return 0;
    }
    else
    printf("Not a leap year");
    
    return 0;
}