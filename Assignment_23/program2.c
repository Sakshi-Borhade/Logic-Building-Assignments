#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch+32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch-32;
    }
    printf("\n Output is : %c",ch);
}
int main()
{
    char cValue = '\0';

    printf("\n Enter the character ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}