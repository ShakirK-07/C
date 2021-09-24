#include<stdio.h>
int main()
{
    int limit, sum=0, arr[25];
    printf("Enter the limit : ");
    scanf("%d",&limit);
    
    for (int i=1; i<=limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=1; i<=limit; i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of the integers : %d",sum);
    return 0;
}
