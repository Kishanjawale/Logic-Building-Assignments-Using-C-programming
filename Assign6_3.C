/*Write a program which accept number from user and return the count of digits in 
between 3 and 7.
Input : 2395 
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2*/

#include<stdio.h>
int CountNumbers(int iNo)
{
    int icnt=0;
    int iDigit=0;
    while (iNo != 0)
    {
        iDigit=iNo%10;
        if(iDigit >= 3 && iDigit <=7 )
        {
            icnt++;
        }    
        iNo= iNo/10;    
    }
    return icnt;
}
int main()
{
    int ivalue=0;
    printf("Enter the number:\n");
    scanf("%d",&ivalue);
    int iRet = CountNumbers(ivalue);
    printf("Count of Numbers between 3 and 7 is : %d",iRet);
    return 0;
}