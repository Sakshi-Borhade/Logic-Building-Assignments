#include<stdio.h>

void StrCatX(char *str, char *dest)
{
    while(*str != '\0')
    {
        str++;
    }
    while(*dest != '\0')
    {
        *str = *dest;
        str++;
        dest++;
    }
    *str = '\0';
}
int main()
{
    char arr[50] = "Marvellous Multi OS";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);
    
    printf("%s",arr);

    return 0;
}