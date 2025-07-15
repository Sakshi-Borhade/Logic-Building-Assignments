#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
}

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void DisplaySmall(PNODE first)
{
    int iMin = 0, iDigit = 0, temp = 0;

    while(first != NULL)
    {
        temp = first->data;
        iMin = 9;

        while(temp != 0)
        {
            iDigit = (temp % 10);
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            temp = (temp / 10);
        }

        printf("%d\t",iMin);
        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iValue = 0, iNum = 0, iCnt = 0;

    printf("Enter the number of elements you want to insert : \n");
    scanf("%d",&iNum);

    for(iCnt = 1; iCnt <= iNum; iCnt++)
    {
        printf("Enter the data that you want to insert : \n");
        scanf("%d",&iValue);
        InsertFirst(&head,iValue);
    }

    Display(head);

    printf("\nThe Smallest digits are : \n");
    DisplaySmall(head);

    return 0;
}
