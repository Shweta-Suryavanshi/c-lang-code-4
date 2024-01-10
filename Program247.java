//project of accessing database using java
//Name: Customised Management System

class node
{
    public int Roll_No;
    public String Name;
    public String City;
    public int Marks;

    public node next;

    public node(int A,String B,String C,int D)
    {
        Roll_No=A;
        Name=B;
        City=C;
        Marks=D;
        next=null;
    }
}

class DBMS
{
    private node first;

    public DBMS()
    {
        first=null;
        System.out.println("DBMS initialised successfully...");
        System.out.println("Student table gets created successfully...");
    }

    public void InserIntoTable(int Roll_No,String Name,String City,int Marks)
    {
        node newn=new node(Roll_No,Name,City,Marks);

        if(first==null)
        {
            first=newn;
        }
        else
        {
            node temp=first;
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.next=newn;
        }

        System.out.println("One record gets inserted successfully..");
    }
}
class Program247
{
    public static void main(String arg[])
    {
        DBMS obj=new DBMS();

        obj.InserIntoTable(1,"Amit","Pune",89);
        obj.InserIntoTable(2,"Pooja","Mumbai",95);
        obj.InserIntoTable(3,"Rahul","Satara",80);
        obj.InserIntoTable(4,"Neha","Pune",78);
    }
}