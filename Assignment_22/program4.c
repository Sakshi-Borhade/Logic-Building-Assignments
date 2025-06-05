#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if((ch >= 97) && (ch <= 122))
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
    char cValue = '\0';
    bool bRet = false;

    printf("\n Enter the character ");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("\n It is a small character ");
    }
    else
    {
        printf("\n It is not a small character ");
    }
    return 0;
}