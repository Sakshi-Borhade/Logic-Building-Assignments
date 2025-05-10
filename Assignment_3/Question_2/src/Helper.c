//////////////////////////////////////////////////////////////////////
//
//  FileName   :   Helper.c
//  Purpose    :   It contains the DisplayFactor function.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   11/05/2025
//
//////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function    :    DisplayFactor
//  Purpose     :    To accept number and print even factors of that number. 
//  Input       :    Integer
//  Output      :    No output
//  Author      :    Sakshi Pankaj Borhade
//  Date        :    11/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if((iNo % 1 == 0) && (i % 2 == 0))
        {
            printf("%d\n",i);
        }
    }
}