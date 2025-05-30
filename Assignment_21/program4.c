#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++);
    {
        if((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits(p,iSize);
    free(p);

    return 0;
}