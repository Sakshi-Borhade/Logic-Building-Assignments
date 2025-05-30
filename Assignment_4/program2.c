#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt <= 1; iCnt--)
    {
        if((iNo%iCnt) == 0)
        {
            printf("%d",iCnt);
        }
    }
}
int main()
{
    int iValue;
    printf("\n Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;
}