/*
Q11: Write a program to input an integer and check whether it is even or odd using if–else.
3
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12

*/
#include <stdio.h>

int main(){
    int a;
    printf("Enter a no. to check even or odd");
    scanf("%d",&a);
    if(!(a%2))
    printf("%d is even",a);
    else
    printf("%d is odd",a);


    return 0;
}