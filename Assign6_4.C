/*Write a program which accept number from user and return multiplication of all 
digits.
Input : 2395 
Output : 270*/

#include<stdio.h>
int digitMult(int iNo)
{
    int iMult=1;
    int iDigit=0;
    while (iNo != 0)
    {
        iDigit=iNo%10;
        if(iDigit != 0 )
        {
            iMult=iMult*iDigit;
        }
        iNo=iNo/10;
    }
    return iMult;
}

int main()
{
    int iValue=0;
    int iMulti=0;
    printf("Enter the number:\n");
    scanf("%d",& iValue);
    iMulti=digitMult(iValue);
    printf("Multiplication of Digits is :%d",iMulti);
    return 0;

}