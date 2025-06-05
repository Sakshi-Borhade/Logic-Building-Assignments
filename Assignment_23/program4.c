#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if(((ch >= 33) && (ch <= 47)) || ((ch >= 58) && (ch <= 40)) || ((ch >= 91) && (ch <= 96)) || ((ch >= 123) && (ch <= 127)))
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
        printf("\n It is special character ");
    }
    else
    {
        printf("\n It is not a special character ");
    }
    return 0;
}