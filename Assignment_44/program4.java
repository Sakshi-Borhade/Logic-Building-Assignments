import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Enter the elemnts in the matrix : ");
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the Matrix are :");
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int[] AdditionOfColumn()
    {
        int i = 0, j = 0;
        int Rows = Arr.length;
        int iCol = Arr[0].length;
        int[] AddCol = new int[iCol];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[1].length; j++)
            {
                AddCol[j] += Arr[i][j];
            }
        }
        return AddCol;
    }
}

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0;

        System.out.println("Enter the number of Rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of Col :");
        int iCol = sobj.nextInt();
        
        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();

        mobj.Display();

        int [] AddCol = mobj.AdditionOfColumn();

        System.out.println("Sum of each column:");
        for (int i = 0; i < AddCol.length; i++)
        {
            System.out.println("Column " + i + " sum: " + AddCol[i]);
        }

    }
}