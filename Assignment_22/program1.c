#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if(((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '0';
    bool bRet = false;

    printf("\n Enter the charachter : ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("\n It is a character ");
    }
    else
    {
        printf("\n It is not a character ");
    }
    return 0;
}