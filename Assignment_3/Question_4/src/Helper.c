//////////////////////////////////////////////////////////////////////
//
//  FileName   :   Helper.c
//  Purpose    :   It contains the ChkVowel function.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   11/05/2025
//
//////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function    :    ChkVowel
//  Purpose     :    To accept one character and check it is a vowel or not. 
//  Input       :    Character
//  Output      :    Integer
//  Author      :    Sakshi Pankaj Borhade
//  Date        :    11/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int ChkVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'A') ||
       (cValue == 'e') || (cValue == 'E') || 
       (cValue == 'i') || (cValue == 'I') || 
       (cValue == 'o') || (cValue == 'O') ||
       (cValue == 'u') || (cValue == 'U'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}