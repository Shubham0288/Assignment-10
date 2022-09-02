// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simpleInterest(float,float,float);
float main()
{
    float P,R,T,SI;
    printf("Enter the principal,rate and time : ");
    scanf("%f%f%f",&P,&R,&T);
    SI=simpleInterest(P,R,T);
    printf("Simple Interest is %f",SI);
    return 0;
}
float simpleInterest(float p,float r,float t)
{
    float si;
    si=(p*r*t)/100;
    return si;
}