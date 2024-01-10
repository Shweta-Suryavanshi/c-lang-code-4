import java.util.*;//for scanner class

interface Calculation
{
    public int Maximum();
    public int Minimum();
}
class Matrix 
{
    protected int Arr[][];

    public Matrix(int A,int B)
    {
        Arr=new int [A][B];
    }

    protected void finalize()
    {
        Arr=null;
    }

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        int i=0,j=0;
        System.out.println("Enter the elemnts: ");
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i=0,j=0;
        System.out.println("Entered elements are: ");
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

class MyMatrix extends Matrix implements Calculation
{
    public MyMatrix(int A,int B)
    {
        super(A,B);
    }

    public int Summation()
    {
        int i=0,j=0,Sum=0;;
        
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Sum+=Arr[i][j];
            }
        } 
        return Sum;  
    }

    public int Maximum()
    {
        int i=0,j=0,Max=Arr[0][0];;
        
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(Max<Arr[i][j])
                {
                    Max=Arr[i][j];
                }
            }
        } 
        return Max;  
    }

    public int Minimum()
    {
        int i=0,j=0,Min=Arr[0][0];;
        
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(Min>Arr[i][j])
                {
                    Min=Arr[i][j];
                }
            }
        } 
        return Min;  
    }
}

class Program237
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

        iRet=mobj.Summation();
        System.out.println("Sum of all the elements is: "+iRet);

        iRet=mobj.Maximum();
        System.out.println("Maximum of the elements is: "+iRet);

        iRet=mobj.Minimum();
        System.out.println("Minimum of the elements is: "+iRet);

        mobj=null;
        System.gc();
    }
}