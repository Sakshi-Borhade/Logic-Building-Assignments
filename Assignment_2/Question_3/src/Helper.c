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
//  Function    :    ChkEven
//  Purpose     :    To accept number from user and check whether the number is even or odd. 
//  Input       :    Integer,Integer
//  Output      :    Integer
//  Author      :    Sakshi Pankaj Borhade
//  Date        :    10/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////


int ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}