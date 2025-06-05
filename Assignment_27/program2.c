void StrNCpyX(char *str, char *dest, int iCnt)
{
    while((*str != '\0') && (iCnt != 0))
    {
        *dest = *str;
        str++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrNCpyX(arr,brr,10);

    printf("\n %s",brr);

    return 0;
}