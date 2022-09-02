/*Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS)*/
#include<stdio.h>
int Fact(int);
int permut(int,int);
int main()
{
    int x,y;
    printf("Enter the 'n' items and 'r' selected item : ");
    scanf("%d%d",&x,&y);
    printf("%d",permut(x,y));
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
int permut(int n, int r)
{
    return Fact(n)/(Fact(n-r));
}