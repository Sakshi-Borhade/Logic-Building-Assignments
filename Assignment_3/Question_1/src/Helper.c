//////////////////////////////////////////////////////////////////////
//
//  FileName   :   Helper.c
//  Purpose    :   It contains the PrintEven function.
//  Author     :   Sakshi Pankaj Borhade
//  Date       :   11/05/2025
//
//////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function    :    PrintEven
//  Purpose     :    To accept one number and print that number of even numbers on screen. 
//  Input       :    Integer
//  Output      :    No output
//  Author      :    Sakshi Pankaj Borhade
//  Date        :    11/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        printf("%d\n",i*2);
    }
}
