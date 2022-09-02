/*Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN) */
#include<stdio.h>
void PrimeFact(int);
int main()
{
    int num;
    PrimeFact(num);
    return 0;
}
void PrimeFact(int num)
{
    int div=1,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2 ; n!=1; i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d ",i);
        }
    }
}