#include<stdio.h>
int main()
{
int mark1,mark2,mark3,mark4;
int avg;
printf("Enter marks in 4 subjects: ");
scanf("%d%d%d%d",&mark1,&mark2,&mark3,&mark4);
avg = (mark1 + mark2 + mark3 + mark4) / 4;

if (avg >= 90)
    {
        printf("Outstanding");
    }

else if (avg < 90 && avg >= 80)
    {
     printf("Very Good");
    }
else if (avg < 80 && avg >= 70)
    {
        printf("Good");
    }
else if (avg < 70 && avg >=60) 
    {
        printf("Average");
    }
else if (avg < 60 && avg >= 50) 
    {
        printf("Satisfactory");
    }
else
    {
        printf("Failed");
    }
   printf("\n");
return 0;
}
