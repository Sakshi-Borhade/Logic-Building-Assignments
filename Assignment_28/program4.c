#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file \n");
        return -1;
    }

    printf("File gets opened successfully \n");

    printf("The Size of the file is %d Bytes",sizeof(Fname));

    close(fd);

    return 0;
}