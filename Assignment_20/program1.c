#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iValue =0;
    int *p = NULL;
    bool bRet = false;

    printf("\n Enter number of elements : ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL == p)
    {
        printf("\n Unable to allocate memory");
        return -1;
    }
    printf("Enter the elements : %d",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);

    if(bRet == true)
    {
        printf("\n Number is not present ");
    }
    
    free(p);

    return 0;
}