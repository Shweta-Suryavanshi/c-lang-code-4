//template for next codes
import java.util.*;//for scanner class
import LB.Matrix;

class MyMatrix extends Matrix 
{
    public MyMatrix(int A,int B)
    {
        super(A,B);
    }

    public void SummationRow()
    {
        int i=0,j=0,Sum=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Sum+=Arr[i][j];
            }
            System.out.println("Summation of row "+(i+1)+" is: "+Sum);
            Sum=0;
        }
    }
}

class Program240
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iRow=0,iCol=0,iRet=0, result=0,result1=0;

        System.out.println("Enter number of rows: ");
        iRow=sobj.nextInt();

        System.out.println("Enter number of columns: ");
        iCol=sobj.nextInt();

        MyMatrix mobj=new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        mobj.SummationRow();

        mobj=null;
        System.gc();
    }
}