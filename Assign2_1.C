//Accept one number from user and print that number of * on screen
//Using for loop
#include<stdio.h>
#include<conio.h>
void display(int iValue)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        printf("* ");
    }
}


int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}
