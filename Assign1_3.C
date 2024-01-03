//Accept one number and check whether it is divisible by 5 or not 
#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;
bool CheckValue(int iNo1)
{
    if((iNo1%5)==0)
    {
        return TRUE;
    }    
    else 
    {
        return FALSE;
    }
}
int main()
{
   int iValue=0;
   bool bRet=false;
   printf("Enter the Number");
   scanf("%d",&iValue);
   bRet=CheckValue(iValue);
   if(bRet==true)
   {
        printf("Divisible by 5");
   }
   else 
   {
        printf("Not Divisible by 5");
   }

    return 0;

}