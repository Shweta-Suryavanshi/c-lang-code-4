import java.util.*;//for scanner class
import LB.Matrix;

class MyMatrix extends Matrix 
{
    public MyMatrix(int A,int B)
    {
        super(A,B);
    }

    public void MaximumRow()
    {
        int i=0,j=0,Max=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Max=Arr[i][0];
                if(Arr[i][j]>Max)
                {
                    Max=Arr[i][j];
                }
            }
            System.out.println("maximum of row "+(i+1)+" is: "+Max);
            
        }
    }
}

class Program241
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
        mobj.MaximumRow();

        mobj=null;
        System.gc();
    }
}