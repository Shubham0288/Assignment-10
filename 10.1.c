// Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float areaCircle(float);
float main()
{
    float R,Area;
    printf("Enter the radius of circle : ");
    scanf("%f",&R);
    Area=areaCircle(R);
    printf("Area of the circle is %f",Area);
    return 0;
}
float areaCircle(float r)
{
    float area;
    area=3.14*r*r;
    return area;
}
