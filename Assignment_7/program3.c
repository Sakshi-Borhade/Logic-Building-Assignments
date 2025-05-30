#include<stdio.h>

int oddFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    if(iNo > 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo%2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter the number : ");
    scanf("%d",&iValue);

    iRet = oddFact(iValue);

    printf("The odd Factorial are : %d",iRet);
    return 0;
}
