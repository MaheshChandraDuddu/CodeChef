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
		    BigInteger N, K;
		    N = sc.nextBigInteger();
		    K = sc.nextBigInteger();
		   
		    if(N.remainder(K.multiply(K)).compareTo(BigInteger.ZERO) == 0)
		    {
		        System.out.println("NO");
		    }
		    else
		    {
		        System.out.println("YES");
		    }
		}
		
	}
}
