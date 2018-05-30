import java.io.*;
import java.math.BigInteger;
import java.util.*;
public class Main {
    public static int distance(int x1,int y1,int x2,int y2){
        return (Math.abs(x1-x2)+Math.abs(y1-y2));
    }
    public static void main(String[] args) throws IOException {
    // TODO Auto-generated method stub
       
        Scanner sc = new Scanner(System.in);
        int n ,t;
        n= sc.nextInt();
        t= sc.nextInt();
        if(n == 1)
        {
               if(t>9)
            {
                System.out.println(-1);
                return ;
            }
            System.out.println(t);
            return ;
        }
        else 
        {
         BigInteger x;
         x= new BigInteger("1");
         while (--n != 0)
         {
             x= x.multiply(BigInteger.valueOf(10));
         }
        
        while(true)
        {
            if(x.mod(BigInteger.valueOf(t)).equals(BigInteger.ZERO))
            {
                System.out.println(x);
                return;
               }
            x = x.add(BigInteger.valueOf(1));
            
                
        }
    }
    
    }
}
