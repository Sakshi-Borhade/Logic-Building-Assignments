#include<stdio.h>

void StrCpySmall(char *str, char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpySmall(arr,brr);

    printf("\n %s",brr);

    return 0;
}