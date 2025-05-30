#include<stdio.h>

void DisplayMultiple(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++ )
    {
        printf("%d\n",iCnt * iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter the number :");
    scanf("%d",&iValue);

    DisplayMultiple(iValue);
    return 0;
}