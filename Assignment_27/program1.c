#include<stdio.h>

void strcpyx(char *str, char *dest)
{
    while(*str != 0)
    {
        *dest = *str;
        str++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    strcpyx(arr,brr);

    printf("\n %s",brr);

    return 0;
}