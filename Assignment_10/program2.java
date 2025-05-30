import java.util.Scanner;

class Digits
{
    public int CountOdd(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        if(iNo > 0)
        {
            iNo = -iNo;
        }
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) != 0)
            {
                iCnt++;
            }
            iNo = iNo/10;
        }
        return iCnt;
    }
}
class program2
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(system.in);
        
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();

        iRet = dobj.CountOdd(iValue);

        System.out.println("The number of odd digits are : "+iRet);
    }
}