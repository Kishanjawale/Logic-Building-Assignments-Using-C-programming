/*Write a program which accept number from user and check whether it contains 0 
in it or not.
Input : 2395 
Output : There is no Zero */

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool CheckZero(int iNO)
{
    int iDigit=0;
    while (iNO != 0)
    { 
        iDigit= iNO % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNO =iNO/10; 
    }
    return false;
}

int main()
{
    int iValue=0;
    bool bRet=true;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    bRet=CheckZero(iValue);
    if(bRet==TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("It Do not Contains Zero\n");
    }
    return 0;
}