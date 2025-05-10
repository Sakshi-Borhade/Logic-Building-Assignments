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
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}