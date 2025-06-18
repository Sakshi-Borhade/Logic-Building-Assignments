#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountCapital(char Fname[])
{
    int fd = 0, iCnt = 0, iCountCap = 0, iRet = 0;
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
                if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCountCap++;
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE);                             
        }
    }

    return iCountCap;
}    

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the name : \n");
    scanf("%d",FileName);

    iRet = CountCapital(FileName);

    printf("Number of Capital Characters are : \n",iRet);

    return 0;
}