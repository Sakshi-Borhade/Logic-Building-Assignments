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

    printf("Enter character: \n");
    scanf("%c",&cVariable);

    DisplayConvert(cVariable);

    return 0;
}