#include<stdio.h>

void Display(char ch)
{
    printf("\n Decimal is : %d",ch);
    printf("\n Octal is : %o ",ch);
    printf("\n Hexadecimal is : OX%X ",ch);
}
int main()
{
    char cValue = '\0';

    printf("\n Enter the character ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}