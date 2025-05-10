/////////////////////////////////////////////////////////////////////
//
//  FileName   :   Main.c
//  Purpose    :   It contains the starting point of application.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   11/05/2025
//
//////////////////////////////////////////////////////////////////////

#include"../include/MyHeader.h"

int main()
{
    char cVariable = '\0';
    int bRet = 0;

    printf("Enter character: \n");
    scanf("%c",&cVariable);

    bRet = ChkVowel(cVariable);

    if(bRet == 1)
    {
        printf("It is a vowel\n");
    }
    else
    {
        printf("It is not a vowel\n");
    }

    return 0;
}