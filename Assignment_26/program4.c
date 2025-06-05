#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0, pos = -1;

    while(str[iCnt != '\0'])
    {
        if(str[iCnt] == ch)
        {
            pos = iCnt;
        }
        iCnt++;
    }
    return pos;
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