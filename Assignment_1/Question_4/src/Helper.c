//////////////////////////////////////////////////////////////////////
//
//  FileName   :   Helper.c
//  Purpose    :   It contains the Check function.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   09/05/2025
//
//////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
//
//  Function    :    Check
//  Purpose     :    To Check the number is divisible by 5 or not. 
//  Input       :    Integer
//  Output      :    Integer
//  Author      :    Sakshi Pankaj Borhade
//  Date        :    09/05/2025
//
//////////////////////////////////////////////////////////////////



int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}