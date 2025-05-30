#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dAns = 0;
    dAns = (fTemp - 32) * (5/9);
    return dAns;
}
int main()
{
    float fVAlue = 0.0;
    double dRet = 0.0;

    printf("\n Enter temperature in Fahrenheit : ");
    scanf("%d",&fVAlue);
    dRet = FhtoCs(fVAlue);

    printf("\n The temperature from celcius to fahrenheit is : %f",dRet);

    return 0;
}