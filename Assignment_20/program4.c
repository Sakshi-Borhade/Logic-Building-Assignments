#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0 , iCnt = 0, iValue1 = 0, iValue2 = 0;
    int iRet;
    int *p = NULL;

    printf("\n Enter number of elements ");
    scanf("%d",&iSize);

    printf("\n Enter the starting point");
    scanf("%d",&iValue1);

    printf("\n Enter the Ending point ");
    scanf("%d",&iValue2);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL == p)
    {
        printf("\n Unable to allocate memory");
        return -1;
    }
    printf("Enter the elements ");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}