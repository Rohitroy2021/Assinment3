//Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    int c,s,pp,lp;
    printf("The cost price of product is %d: ");
    scanf("%d",&c);
    printf("The selling price of product is %d: ");
    scanf("%d",&s);
    int profit =s-c;
    int loss=c-s;
    int pp=(profit*100)/c;
    int lp=(loss*100)/s;
    if(c<s)
    {
        printf("profit percent is %d",pp);
        }
        else if(c>s)
            {
            printf("loss percent is %d",lp);
            }
        return 0;

}
