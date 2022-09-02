// Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int Fact(int);
int main()
{
    int n,a;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=Fact(n);
    printf("%d",a);
    return 0;
}
int Fact(int num)
{
    int i,fact=1;
    for(i=1 ; i<=num ; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}
