#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt != '\0'])
    {
        if(str[iCnt] == ch)
        {
            return iCnt;
        }
        iCnt++;
    }
    return -1;
}
int main()
{
    char arr[20], cValue = '\0';
    int iRet = 0;

    printf("\n Enter string ");
    scanf("%[^'\n']s",arr);

    printf("\n Enter the character ");
    scanf("%c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("\n Character Location is %d",iRet);

    return 0;
}