//////////////////////////////////////////////////////////////////////
//
//  FileName   :   Helper.c
//  Purpose    :   It contains the Display function.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   10/05/2025
//
//////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function    :    Display
//  Purpose     :    To accept number from user and display first number in second number of times. 
//  Input       :    Integer,Integer
//  Output      :    No output
//  Author      :    Sakshi Pankaj Borhade
//  Date        :    10/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
}