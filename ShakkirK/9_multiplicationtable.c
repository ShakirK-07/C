#include<stdio.h>
int main()
{
    int inp;
    printf("Enter number to find multiplication table : ");
    scanf("%d",&inp);
    for (int i=1; i<11; i++)
    {
        printf("%d*%d=%d\n", i, inp, i*inp);
    }
    return 0;
}
