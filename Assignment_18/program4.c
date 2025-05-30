#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt] % 3) == 0) && ((Arr[iCnt] % 5) == 0))
        {
            printf("%d \n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iCnt = 0, iSize = 0;
    int *p = NULL;

    printf("\n Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL == p )
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("\n Enter %d elements : ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\n Enter element : %d ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);

    free(p);
    return 0;
}