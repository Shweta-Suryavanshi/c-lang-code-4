void revTable(int iNo)
{
    int iCnt=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (iCnt=10;iCnt>=1;iCnt--)
    {
         printf("%d\t",iNo*iCnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    revTable(iValue);

    return 0;
}