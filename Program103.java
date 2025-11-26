// OOP DEsign

class ArrayX
{
    public int Arr[];
    public int iSize;

    public ArrayX(int no)
    {
        iSize = no;      // to store the no which is given by user 
        Arr = new int[iSize];  //Resource Allocation

    }

}

class Program103
{
    public static void main(String A[])
    {
        ArrayX aobj1 = new ArrayX(5);
        ArrayX aobj2 = new ArrayX(7);
        ArrayX aobj3 = new ArrayX(10);
    }
}