#include<stdio.h>
typedef int
#define TRUE 1
#define FALSE 0
void ChkVowel(char cNo)
{
    if(cNo<a,e,i,o,u>)
    {
        return TRUE;
    }
    else 
    {
        retrun FALSE;
    }
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter character\n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);
    if(bRet==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }
    return 0;
}