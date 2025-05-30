#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iMulti = 1;
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2 ) != 0)
        {
            iMulti = iMulti * Arr[iCnt];
        }
    }
        return iMulti;
}
int main()
{
     int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = Product(p,iSize);

    printf("\n Product is %d",iRet);

    free(p);

    return 0;

}