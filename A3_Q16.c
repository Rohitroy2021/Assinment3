//16. Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
if(n>'a' && n<'z')
printf("Alphabet(lowercase)\n");
else if(n>'A' && n<'Z')
printf("Alphabet uppercase\n");
else if(n%10==0||1||2||3||4||5||6||7||8||9)
printf("digit\n");
else
printf("special character\n");
return 0;
}
