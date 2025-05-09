//////////////////////////////////////////////////////////////////////
//
//  FileName   :   Helper.c
//  Purpose    :   It contains the Division function.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   09/05/2025
//
//////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
//
//  Function    :    Divide
//  Purpose     :    To perform Division of two numbers. 
//  Input       :    Integer,Integer
//  Output      :    Integer
//  Author      :    Sakshi Pankaj Borhade
//  Date        :    09/05/2025
//
////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}
