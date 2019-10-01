import java.util.*;
import java.lang.*;
import java.math.*;

class Main
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            BigInteger N, K, ans, temp;
            N = sc.nextBigInteger();
            K = sc.nextBigInteger();
            ans = BigInteger.ZERO;
            //K > N 
            if(K.mod(N).compareTo(BigInteger.ZERO) == 0)
            {
                System.out.println(0);
            }
            // K == N 
            else if(N.compareTo(K.multiply(BigInteger.ONE.add(BigInteger.ONE))) == 0)
            {
                ans = N.subtract(BigInteger.ONE);
                System.out.println(ans);
            }
            //ncr = nc(n-r)
            else if(N.compareTo(K.multiply(BigInteger.ONE.add(BigInteger.ONE))) == 1)
            {
                ans = K.multiply(BigInteger.ONE.add(BigInteger.ONE));
                System.out.println(ans);
            }
            else if(N.compareTo(K) == 1)
            {
                ans = (BigInteger.ONE.add(BigInteger.ONE)).multiply(N.subtract(K));
                System.out.println(ans);
            }
            else if(N.compareTo(K) == -1)
            {
                if(N.compareTo(BigInteger.ONE.add(BigInteger.ONE)) == 0)
                {
                    ans = BigInteger.ONE;
                    System.out.println(1);
                }
                else if(N.compareTo(K.subtract(BigInteger.ONE)) == 0)
                {
                    ans = BigInteger.ONE.add(BigInteger.ONE);
                    System.out.println(ans);
                }
                else
                {
                    temp = K;
                    BigInteger qu;
                    qu = K.divide(N); 
                    /*while(temp.compareTo(N) == 1)
                    {
                        temp = temp.subtract(N);
                    }*/
                    temp = temp.subtract(qu.multiply(N));
                    K = temp;
                    //System.out.println(K);
                    if(K.mod(N).compareTo(BigInteger.ZERO) == 0)
                    {
                        System.out.println(0);
                    }
            // K == N 
                    else if(N.compareTo(K.multiply(BigInteger.ONE.add(BigInteger.ONE))) == 0)
                    {
                        ans = N.subtract(BigInteger.ONE);
                        System.out.println(ans);
                        
                    }
                    else if(N.compareTo(K.multiply(BigInteger.ONE.add(BigInteger.ONE))) == 1)
                    {
                        ans = K.multiply(BigInteger.ONE.add(BigInteger.ONE));
                        System.out.println(ans);
                        
                    }
                    else if(N.compareTo(K) == 1)
                    {
                        ans = (BigInteger.ONE.add(BigInteger.ONE)).multiply(N.subtract(K));
                        System.out.println(ans);
                        
                    }
                }
            }
        }
    }
}
