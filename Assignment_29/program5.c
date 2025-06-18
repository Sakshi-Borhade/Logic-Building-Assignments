#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

void Display(char Fname[], int iNo)
{
    int fd = 0, iCnt = 0, iRet = 0;
    char Buffer[50] = {'\0'};

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if(iCnt <= iNo)
                {
                    printf(Buffer[iCnt]);
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE);                             
        }
    }
}    

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter the name : \n");
    scanf("%d",FileName);

    printf("Enter the number of characters : \n");
    scanf("%d",&iValue);

    Display(FileName,iValue);

    return 0;
}