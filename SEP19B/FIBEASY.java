/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

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
		    BigInteger N, fr;
		    N = sc.nextBigInteger();
		    int n = N.bitLength();
		    fr = BigInteger.ONE.add(BigInteger.ONE).add(BigInteger.ONE).add(BigInteger.ONE);
		    if(N.compareTo(BigInteger.ONE) == 0)
		    {
		        System.out.println("0");
		    }
		    else if(N.compareTo(BigInteger.ONE.add(BigInteger.ONE)) == 0)
		    {
		        System.out.println("1");
		    }
		    else if(N.compareTo(BigInteger.ONE.add(BigInteger.ONE).add(BigInteger.ONE)) == 0)
		    {
		        System.out.println("1");
		    }
		    else if(N.compareTo(fr) >= 0 && N.compareTo(fr.add(fr)) < 0)
		    {
		        System.out.println("2");
		    }
		    else if(N.compareTo(fr.add(fr)) >= 0 && N.compareTo(fr.add(fr.add(fr))) < 0)
		    {
		        System.out.println("3");
		    }
		    else if(n%4 == 0)
		    {
		        System.out.println("3");
		    }
		    else if(n%4 == 1)
		    {
		        System.out.println("0");
		    }
		    else if(n%4 == 2)
		    {
		        System.out.println("9");
		    }
		    else if(n%4 == 3)
		    {
		        System.out.println("2");
		    }
		    //System.out.println();
		}
	}
}
