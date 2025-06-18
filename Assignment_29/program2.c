#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountSmall(char Fname[])
{
    int fd = 0, iCnt = 0, iCountSmall = 0, iRet = 0;
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
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iCountSmall++;
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE);                             
        }
    }

    return iCountSmall;
}    

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the name : \n");
    scanf("%d",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small Characters are : \n",iRet);

    return 0;
}