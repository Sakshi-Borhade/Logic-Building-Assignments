#include<stdio.h>

int Multfact(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter Number : ");
    scanf("%d",&iValue);

    iRet = Multfact(iValue);

    printf("%d", iRet);
    return 0;
}