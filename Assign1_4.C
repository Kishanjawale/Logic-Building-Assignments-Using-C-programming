//Program to print 5 to 1 numbers on screen. 
#include<stdio.h>
void Display()
{
    int iCnt=0;
    int iNo=5;
    for(iCnt=iNo;iCnt>0;iCnt--)

        {
            printf("%d \n",iCnt);
        }
}
int main()
{
    Display();
    return 0;

}