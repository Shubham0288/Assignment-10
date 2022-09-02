/*Write a function to calculate the number of combinations one can make from n items 
and r selected at a time. (TSRS)*/
#include<stdio.h>
int Fact(int);
int comb(int ,int);
int main()
{
    int x,y;
    printf("Enter the number of items 'n' and selected item 'r' :");
    scanf("%d%d",&x,&y);
    printf("%d",comb(x,y));
    return 0;
}
int Fact(int num)
{
    int fact=1;
    for(int i=1 ; i<=num ; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int comb(int n ,int r)
{
    return Fact(n)/(Fact(r)*Fact(n-r));
}