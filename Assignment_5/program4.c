#include<stdio.h>

void DisplayOdd(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt )
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter the number :");
    scanf("%d",&iValue);

    DisplayOdd(iValue);
    return 0;
}