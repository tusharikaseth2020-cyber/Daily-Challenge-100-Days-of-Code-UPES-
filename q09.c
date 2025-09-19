/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
  
*/

#include <stdio.h>
#include <math.h>

    float si(float p, float r, float t) {
    return (p * r * t) / 100.0;
}


float ci(float p, float r,float t) {
    float amt = p * pow(1 + r / 100.0, t);
    return amt - p;
}

int main() {
    float p, r, t;

    printf("Enter Principal, Rate of Interest and time");
    scanf("%f %f %f", &p, &r, &t);

    float s = si(p, r, t);
    float c = ci(p, r, t);

    printf("Simple Interest = %.3lf\n", s);
    printf("Compound Interest = %.3lf\n", c);

    return 0;

    return 0;
}