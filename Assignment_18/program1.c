#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iSum1 =0, iSum2 =0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        
        }    
    }
    return iSum1 - iSum2;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("\n Enter the number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL == p)
    {
        printf("Unable to alloacte memory");
        return -1;
    }
    printf("\n Enter the %d elements : ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\n Enter element : %d ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("\n Result is : %d ",iRet );

    free(p);

    return 0;
}