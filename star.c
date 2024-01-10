//program to display * given number of times using for loop.
#include<stdio.h>
void display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue=0;
    printf("Enter no.of time you wnat to diplay * on screen : \n");
    scanf("%d",&iValue); 
    display(iValue);
    return 0;
}