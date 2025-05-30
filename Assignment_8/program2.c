#include<stdio.h>

double AreaRect(float fWidth, float fHeight)
{
    double dAns = 0;
    dAns = fWidth * fHeight;
    return dAns;
}
int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("\n Enter Width : ");
    scanf("%f",&fValue1);

    printf("\n Enter Height : ");
    scanf("%f",&fValue2);

    dRet = AreaRect(fValue1, fValue2);

    printf("The Area of Rectangle is : %f",dRet);

    return 0;
}