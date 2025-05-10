/////////////////////////////////////////////////////////////////////
//
//  FileName   :   Main.c
//  Purpose    :   It contains the starting point of application.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   10/05/2025
//
//////////////////////////////////////////////////////////////////////

#include"../include/MyHeader.h"


int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Enter frequency:\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}