//Accept two numbers from user and display first number in second 
//number of times. 
//Input : 12 5 
//Output : 12 12 12 12 12 


#include<stdio.h>

void display(int iNo1,int iNo2)
{
    register int  iCnt=0;
    for(iCnt=0;iCnt<iNo2;iCnt++)
    {
        printf("%d\t",iNo1);
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter Number1 and Number2\n");
    scanf("%d%d",&iValue1,&iValue2);
    display(iValue1,iValue2);
    return 0;

}