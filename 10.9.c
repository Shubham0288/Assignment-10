/*Write a function to check whether a given number contains a given digit or not. 
(TSRS)*/
#include<stdio.h>
int Digit(int,int);
int main()
{
    int n,D;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a digit : ");
    scanf("%d",&D);
    printf("%d",Digit(n,D));
    return 0;
}
int Digit(int num, int digit)
{
    int rem,d;
    do
    {
        rem=num%10;
        if(digit==rem)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    } while (num=0);
    
}
