//program to print 5 times "Marvellous" on screen 
#include<stdio.h>
void  Display(int iNo1)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iNo1;iCnt++)
    {
        printf("Marvellous\n");
    }
}
int main()
{
    int iValue=5;
    Display(iValue);
    return 0;
}