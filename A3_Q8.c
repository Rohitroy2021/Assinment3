//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main(){
int y;
printf("Enter the year: ");
scanf("%d",&y);
if(y%4==0)
{
printf("Leap year");
}
else
{
printf("Non leap year");
}
return 0;


}
