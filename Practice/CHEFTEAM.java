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
            BigInteger N, K, ans, i;
            N = sc.nextBigInteger();
            K = sc.nextBigInteger();
            ans = BigInteger.ONE;
            //K > N 
            if(K.compareTo(N) > 0)
            {
                System.out.println("0");
                continue;
            }
            // K == N 
            else if(K.compareTo(N) == 0)
            {
                System.out.println(ans);
                continue;
            }
            //ncr = nc(n-r)
            else if(K.compareTo(N.subtract(K)) > 0)
            //CONDITION TO BE TAKEN CARE OF(IF NOT, WOULD RESULT INTO TLE)
            {
                K = N.subtract(K);
            }
            for(i = BigInteger.ONE; i.compareTo(K)<=0;i = i.add(BigInteger.ONE))
            {
                ans = ans.multiply(N.subtract(i).add(BigInteger.ONE)).divide(i);
            }
            System.out.println(ans);
        }
    }
}