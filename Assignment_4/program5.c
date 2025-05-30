#include<stdio.h>

int FactDiif(int iNo)
{
    int iCnt = 0;
    int fSum = 0;
    int nfSum = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo%iCnt) != 0)
        {
            fSum = fSum + iCnt;
        }
        else
        {
            nfSum = nfSum + iCnt;
        }
        return fSum - nfSum;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter the number :");
    scanf("%d",&iValue);

    iRet = FactDiif(iValue);
    printf("%d",iRet);
    return 0;
}