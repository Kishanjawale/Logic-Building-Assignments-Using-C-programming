/*Write a program which accept radius of circle from user and calculate its area. 
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3 
Output : 88.2026 */

#include<stdio.h>
float circleArea(float iRadius)
{
    float iArea=0.0;
    float pi=3.14;
    iArea=pi*(iRadius*iRadius);
    return iArea;
}
int main()
{
    float iRadius=0.0;
    float iArea=0.0;
    printf("Enter the Radius of a circle\n");
    scanf("%f",&iRadius);
    iArea=circleArea(iRadius);
    printf("Area of Circle:%f \n",iArea);

    return 0;
}