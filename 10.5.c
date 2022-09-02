// Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void Odd(int);
int main()
{
    int NUM;
    Odd(NUM);
    return 0;
}
void Odd(int num)
{
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1 ; i<=2*num; i=i+2)
    {
        printf("%d\n",i);
    }
}