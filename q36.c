/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int a,b,min,max;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    if(a<0)a=-a;
    if(b<0)b=-b;

    if(a==0 && b==0)
    {
         printf("HCF is not defined for (0,0)\n");
        return 0;
    }

    if(a==0)
    {
        printf("HCF: %d",b);
        return 0;
    }if(b==0)
   {
    printf("HCF: %d",a);
    return 0;
    }

    if(a<=b)
    {
    min=a;
    max=b;
    }
    else
    {
    min=b;
    max=a;
    }


    while(min!=0){
        int temp=min;
        min=max%min;
        max=temp;
    }
    printf("HCF: %d",max);
    return 0;
}   