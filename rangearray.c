#include<stdio.h>
#include<stdlib.h>
void range(int Arr[],int iSize,int iNo1,int iNo2)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] > iNo1 && Arr[iCnt] < iNo2 )
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    
}
int main()
{
    int iCount=0,iCnt=0,iValue1=0,iValue2;
    int *ptr=NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));

    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("Enter %d element\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter start range");
    scanf("%d",&iValue1);

    printf("Enter end range");
    scanf("%d",&iValue2);
    
    range(ptr,iCount,iValue1,iValue2);

    return 0;

}