#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = iLength; iCnt >= 0 ; iCnt--)
    {
        if((Arr[iCnt] == iNo))
        {
            return iCnt;
        }
    }
        return -1;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue =0;
    int *p = NULL;

    printf("\n Enter number of elements : ");
    scanf("%d",&iSize);

    printf("\n Enter the number : ");
    scanf("%d",&iValue);

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

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("\n There is no such number ");
    }
    else
    {
        printf("\n First occurance of number is %d",iRet);
    }
    free(p);

    return 0;
}