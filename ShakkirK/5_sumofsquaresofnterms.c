#include<stdio.h>
int main()
{
    int inp, square = 0, result = 0;
    printf("Enter the number : ");
    scanf("%d",&inp);
    for (int i = 1; i <=inp ; i++ )
    {
        square = i * i ;
        result = result + square;    
    }
    
    printf("%d\n",result);
    return 0 ;
}
