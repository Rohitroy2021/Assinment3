//Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
if(n%5==0)
{
printf("divisible number ");
}
else
{
printf("no divisible  number");
}
return 0;
}
