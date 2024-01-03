/*Write a program which accept number from user and return difference between 
summation of even digits and summation of odd digits.
Input : 2395 
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)*/
#include<stdio.h>
int CountDifference(int iNo)
{
    int SummationEven=0;
    int SumamtionOdd=0;
    int iDigit=0;
    int iDiff=0;
    
    while (iNo != 0)
    {
        iDigit=iNo%10;
        if(iDigit % 2 == 0)
        {
            SummationEven=SummationEven+iDigit;
        }
        else
        {
            SumamtionOdd=SumamtionOdd+iDigit;
        }
        iNo=iNo/10;
    }
    iDiff= SummationEven-SumamtionOdd;
    return iDiff;
}
int main()
{
    int iValue=0;
    int iDiff=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);
    
    iDiff=CountDifference(iValue);
    printf("Difference between Summation of odd and even Digits: %d",iDiff);    
    
    return 0;
}