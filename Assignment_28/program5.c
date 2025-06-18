#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'}, Buffer[50] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    printf("Enter the data that you want to write : \n");
    scanf("%s",Buffer);

    fd = open(Fname,O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File is opened successfully \n");

    iRet = write(fd,Buffer,strlen(Buffer));

    printf("The data entered gets written successfully\n");

    close(fd);

    return 0;
}