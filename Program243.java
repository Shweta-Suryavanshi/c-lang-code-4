import java.util.*;//for scanner class
import LB.Matrix;

class MyMatrix extends Matrix 
{
    public MyMatrix(int A,int B)
    {
        super(A,B);
    }

    public int CountEven()
    {
        int i=0,j=0,Frequency=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                
                if(Arr[i][j]%2 == 0)
                {
                    Frequency++;
                }
            }
        }
        return Frequency;
    }
}

class Program243
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iRow=0,iCol=0,iRet=0;

        System.out.println("Enter number of rows: ");
        iRow=sobj.nextInt();

        System.out.println("Enter number of columns: ");
        iCol=sobj.nextInt();

        MyMatrix mobj=new MyMatrix(iRow,iCol);
        int value=0;

        mobj.Accept();
        mobj.Display();

        iRet=mobj.CountEven();
        System.out.println("even elements are : "+iRet);

        mobj=null;
        System.gc();
    }
}