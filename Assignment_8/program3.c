#include<stdio.h>

int kmToMeter(int iNo)
{
    int iAns = 0;
    iAns = iNo * 1000;
    return iAns;
} 
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter the number : ");
    scanf("%d",&iValue);

    iRet = kmToMeter(iValue);

    printf("\n The kilometer to meter is : %d",iRet);

    return 0;
}