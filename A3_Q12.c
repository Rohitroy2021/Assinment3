//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
#include<stdlib.h>
void main()
{
char ch;
printf("Enter character %c ");
scanf("%c",&ch);
if(ch>='A'&&Ch<='Z')
{
printf("uppercase");
}
else
    if(ch>='a' && ch<='z')
{
printf("Lowecase");
}
return 0;
}
