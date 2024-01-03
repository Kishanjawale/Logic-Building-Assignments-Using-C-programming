//Accept one number from user and print that number of * on screen
//Using while Loop
#include<stdio.h>
#include<conio.h>
void display(int iValue)
{
    int iCnt=0;
    while (iCnt<iValue)
    {
        printf("*\t");
        iCnt++;
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
