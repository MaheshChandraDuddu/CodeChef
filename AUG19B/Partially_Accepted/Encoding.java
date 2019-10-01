/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
 

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int t;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t-- > 0)
		{
		    BigInteger NL, L, NR, R, sum = BigInteger.ZERO, i, M;
		    M = new BigInteger("1000000007");
		    NL = sc.nextBigInteger();
		    L = sc.nextBigInteger();
		    NR = sc.nextBigInteger();
		    R = sc.nextBigInteger();
		    for(i = L; i.compareTo(R) <= 0; i = i.add(BigInteger.ONE))
		    {
		        String s = i.toString();
		        int len = s.length()-1;
		        char c;
		        c = s.charAt(0);
		        int j = 1;
		        while(j <= len)
		        {
		            if(s.charAt(j) == c)
		            {
		                s = s.substring(0, j) + '0' + s.substring(j+1);
		            }
		            else
		            {
		                c = s.charAt(j);
		            }
		            j++;
		        }
		       // System.out.println("s = "+s);
		        BigInteger k = new BigInteger(s);
		        //System.out.println("k = "+k);
		        sum = sum.add(k); 
		    }
		    System.out.println(sum.mod(M));
		}
	}
}
