/*Write a program which accept number from user and count frequency of such a 
digits which are less than 6.
Input : 2395 
Output : 3
Input : 1018
Output : 3*/

#include<stdio.h>

int CountNo(int iNo)
{
    int iCnt=0;
    int iDigit=0;
    while (iNo != 0)
    {
        iDigit= iNo%10;
        if(iDigit < 6 )
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
    
}
int main()
{
    int iValue=0;
    int iFrequency=0; 
   
    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    iFrequency=CountNo(iValue);
   
    printf("Count of digits which are less thn 6  is %d ",iFrequency);
    
    return 0;
}