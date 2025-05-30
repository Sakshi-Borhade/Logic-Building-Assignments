import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iNum = 1;

        for(i = 1; i <= iRow; i++)
        {
            if((i % 2) == 0)
            {
                iNum = 2;
            }
            else
            {
                iNum = 3;
            }
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(iNum+"\t");
                iNum += 2;
            }
            System.out.println();
        }
    }
}
class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ")
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);
    }
}