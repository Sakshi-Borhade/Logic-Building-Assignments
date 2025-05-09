
//////////////////////////////////////////////////////////////////////
//
//  FileName   :   Helper.c
//  Purpose    :   It contains the Display function.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   09/05/2025
//
//////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
//
//  Function    :    Display
//  Purpose     :    To perform print * on screen by accepting how many times by the user. 
//  Input       :    Integer
//  Output      :    No output
//  Author      :    Sakshi Pankaj Borhade
//  Date        :    09/05/2025
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}