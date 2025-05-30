#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(ch,"\t");
        ch++;
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("\n Enter the number : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}