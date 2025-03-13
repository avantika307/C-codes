#include<stdio.h>
#include<conio.h>
    void main()
{
    int a,b,sum,sub,mult;
clrscr();
     printf("enter 1st number");
scanf("%d",&a);
     printf("enter 2nd number");
scanf("%d",&b);
     sum=a+b;
     sub=a-b;
     mult=a*b;
     div=a/b;

printf("\naddition of %d & %d is=%d",a,b,sum);
printf("\nsubstraction of %d & %d is=%d",a,b,sub);
printf("\nmultiplication of %d & %d is=%d",a,b,mult);
printf("\ndivision of %d & %d is=%d",a,b,div);
     getch();
}


