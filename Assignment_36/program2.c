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

void DisplayPalindrome(PNODE first)
{
    int Rev = 0, iDigit = 0, temp = 0;

    while(first != NULL)
    {
        temp = first->data;
        Rev = 0;

        while(temp != 0)
        {
            iDigit = (temp % 10);
            Rev = (Rev * 10) + (temp % 10);
            temp = (temp / 10);
        }

        if(Rev == (first->data))
        {
            printf("%d\t",first->data);
        }

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

    printf("\nThe Palindrome digits are : \n");
    DisplayPalindrome(head);

    return 0;
}
