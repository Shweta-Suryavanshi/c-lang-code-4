//Accept to numbesr from user and display first number in second number of times.
#include<stdio.h>
void display(int iNo,int iFrequency)
{
    int i=0;
    for(i=1;i<=iFrequency;i++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);

    display(iValue,iCount);

    return 0;
}