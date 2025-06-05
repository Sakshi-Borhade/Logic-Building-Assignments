#include<stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("\n Enter string ");
    scanf("%[^'\n']s",arr);

    DisplayDigits(arr);

    return 0;
}