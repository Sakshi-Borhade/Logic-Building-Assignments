#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("\n Exam is at 7 pm");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("\n Exam is at 8:30 AM ");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("\n Exam is at 9:20 AM ");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("\n Exam is at 10:30 AM ");
    }
    else
    {
        printf(" No Exam ");
    }
}
int main()
{
    char cValue = '\0';

    printf("\n Enter your division ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}