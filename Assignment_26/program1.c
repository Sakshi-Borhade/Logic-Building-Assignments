#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if((*str == ch))
        {
            return true;
        }
        else
        {
            return false;
        }
        str++;
    }
}
int main()
{
    char arr[20], cValue = '\0';
    bool bRet = false;

    printf("\n Enter string ");
    scanf("%[^'\n']s",arr);

    bRet = ChkChar(arr , cValue);

    if(bRet == true)
    {
        printf("\n Character found ");
    }
    else
    {
        printf("\n Character not found ");
    }
    return 0;
}