#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 0;
    int iFact2 = 0;
    
    if(iNo > 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo%2) == 0)
        {
            iFact1 = iFact1*iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    return iFact1 - iFact2;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("\n The Difference between Even and odd factorial is : %d",iRet);

    return 0;
}