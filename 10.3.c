/*Write a function to check whether a given number is even or odd. Return 1 if the 
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int EvenOdd(int);
int main()
{
    int num,N;
    printf("Enter a number : ");
    scanf("%d",&num);
    N=EvenOdd(num);
    printf("%d",N);
    return 0;
}
int EvenOdd(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}

