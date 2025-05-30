#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize = 0, iValue = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("\n Enter the number of elements : ");
    scanf("%d",&iSize);

    printf("\n Enter the number : ");
    scanf("%d",iValue);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("\n Enter the elements :");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt++);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize,iValue);

    printf("\n Result is %d",iRet);

    free(p);

    return 0;
}