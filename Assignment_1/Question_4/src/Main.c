/////////////////////////////////////////////////////////////////////
//
//  FileName   :   Main.c
//  Purpose    :   It contains the starting point of application.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   09/05/2025
//
//////////////////////////////////////////////////////////////////////

#include"../include/MyHeader.h"

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == 1)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }

    return 0;
}