//Accept number from user and check whether number is even or odd. 
#include<stdio.h>
bool checkEvenOdd(int iValue)
{
    if(iValue%2==0)
    {
        return true;
    }
    
    return false;
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    bRet=checkEvenOdd(iValue);
    if(bRet==true)
    {
        printf("Number is EVEN\n");
    }
    else
    {
        printf("Number is ODD\n");
    }
    return 0;

}