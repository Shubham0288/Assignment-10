// Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void Naturalnum(int);
int  main()
{
    int Num;
    Naturalnum(Num);
    return 0;
}
void Naturalnum(int num)
{
    printf("Enter the N th number : ");
    scanf("%d",&num);
    for(int i=1 ; i<=num ; i++)
    {
        printf("%d\n",i);
    }
}