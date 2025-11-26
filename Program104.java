// OOP DEsign
import java.util.*;
class ArrayX
{
    public int Arr[];
    public int iSize;

    public ArrayX(int no)
    {
        System.out.println("Inside Constructor");
        iSize = no;      // to store the no which is given by user 
        Arr = new int[iSize];  //Resource Allocation

    }
    public void accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;

        System.out.println("Enter The elements of Array");

        for(i = 0; i<Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("ENter elements of array : ");
        int i = 0;
         for(i = 0; i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }

    }
}

class Program104
{
    public static void main(String A[])
    {
        ArrayX aobj1 = new ArrayX(5);
        ArrayX aobj2 = new ArrayX(7);
    }
}