//Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Enter c: ");
scanf("%d",&c);
if(a>b && a>c)
{
printf("Greater is a-%d",a);
}
else if(b>a && b>c)
{
printf("Greater is b-%d",b);
}
else
{
printf("Greater is c-%d",c);
}
return 0;
}
