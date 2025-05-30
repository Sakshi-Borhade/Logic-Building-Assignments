#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;
    
    if((Arr == NULL) || (iLength <= 0))
    {
        printf("\n Invalid input ");
        return -1;
    }
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++);
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("\n Enter number of elements : ");
    scanf("%d",&iSize);

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

    iRet = Maximum (p,iSize);
    printf("Maximum element is : %d",iRet);

    free(p);

    return 0;
}