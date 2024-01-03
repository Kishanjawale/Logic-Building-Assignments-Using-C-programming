//Accept one number from user  if number is less than 10 then pritnt "Hello" otherwise print "Demo"
#include<stdio.h>

void display(int iNo)
{
    if(iNo<10)
    {
        printf("HELLO");

    }
    else
    {
        printf("DEMO");
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;

}