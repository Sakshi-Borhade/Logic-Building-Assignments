#include<stdio.h>

int TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= iNo; iCnt++)
    {
        printf("%d\n",iCnt * iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter the number : ");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;
}