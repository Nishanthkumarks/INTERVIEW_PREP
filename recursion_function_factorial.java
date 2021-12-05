import java.util.*;
public class recursion_function_factorial
{
    public static int fact(int n)
    {
        if(n==0)
        return 1;
        else
        return n*fact(n-1);
    }
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter n value:");
        int n=in.nextInt();
        int res=fact(n);
        System.out.println("RESULT:"+res);
    }
}