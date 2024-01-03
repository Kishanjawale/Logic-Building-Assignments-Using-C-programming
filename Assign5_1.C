//Write a program which accept number from user and display its digits in reverse order.
//Input : 2395 
//Output : 5
//         9
//         3
//         2
#include<stdio.h>

void displayDigits(int iNo)
{
    int iCnt=0;
    int digit=0;
    while (iNo != 0)
    {
        digit=iNo%10;
        printf("%d\n",digit);
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    displayDigits(iValue);
    return 0;
}

