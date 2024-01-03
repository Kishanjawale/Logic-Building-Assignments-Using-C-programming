/*Write a program which accept number from user and return the count of odd digits.
Input : 1018
Output : 2
Input : -1018
Output : 2 */
#include<stdio.h>
int CountOdd(int iNo)
{
    int icnt=0;
    int iDigit=0;
    while (iNo != 0)
    {
        iDigit=iNo%10;
        if(iDigit % 2 != 0)
        {
            icnt++;
        }
        iNo=iNo/10;
    }
    return icnt;

}

int main()
{
    int ivalue =0;
    int iRet=0;
    printf("Enter the number:\n");
    scanf("%d",&ivalue);
    iRet=CountOdd(ivalue);
    printf("Count of odd Digits:%d",iRet);
    return 0;

}