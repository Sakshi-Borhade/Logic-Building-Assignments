//////////////////////////////////////////////////////////////////////
//
//  FileName   :   Helper.c
//  Purpose    :   It contains the DisplayConvert function.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   11/05/2025
//
//////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function    :    DisplayConvert
//  Purpose     :    To accept one character and convert case of that character. 
//  Input       :    Character
//  Output      :    No output
//  Author      :    Sakshi Pankaj Borhade
//  Date        :    11/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c\n",cValue - 32);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c\n",cValue + 32);
    }
}