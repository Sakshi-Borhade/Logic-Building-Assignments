//////////////////////////////////////////////////////////////////////
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
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1 , iValue2);

    printf("Division is: %d",iRet);

    return 0;
}