#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char arr[20], cValue = '\0';
    int iRet = 0;

    printf("\n Enter string ");
    scanf("%[^'\n']s",arr);

    printf("\n Enter the character ");
    scanf("%c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("\n Character frequency is %d",iRet);

    return 0;
}