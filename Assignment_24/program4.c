#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I')|| (*str == 'O')|| (*str == 'U')|| (*str == 'a') || (*str == 'e')|| (*str == 'i')|| (*str == 'o') || (*str == 'E'))
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
    char Arr[50];
    int bRet = 0;

    printf("\n Enter string : ");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("\n There is no vowel");
    }
    return 0;
}