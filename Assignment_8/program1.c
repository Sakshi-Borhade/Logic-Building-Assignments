#include<stdio.h>

double CircleArea(float fRadius)
{
    const float PI = 3.14;
    double dAns = 0;
    dAns = PI * fRadius * fRadius;
    return dAns;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("\n The area of circle is : %f",dRet);

    return 0;
}