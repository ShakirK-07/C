#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter value of C : ");
    scanf("%f",&c);
    f = 1.8 * c + 32.0;
    printf("Fahrenheit temprature is : %0.1f\n", f);
    return 0;
}
