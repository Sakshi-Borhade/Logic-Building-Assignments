#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    int iLength = strlen(str);
    int iCnt = 0;

    printf("\n Reverse string : ");

    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        printf("\n %c", str[iCnt]);
    }
    printf("\n ");
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}