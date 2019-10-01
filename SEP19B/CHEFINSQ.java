/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static BigInteger fact(BigInteger num)
{
    BigInteger ans = BigInteger.ONE, i, rng;
   // rng = BigInteger.valueOf(num);
    rng = num;
    for(i = BigInteger.ONE.add(BigInteger.ONE); i.compareTo(rng) <= 0; i = i.add(BigInteger.ONE))
    {
        ans = ans.multiply(i);
    }
    return ans;
}
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int t;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t-- > 0)
		{
		    int N, K;
		    N = sc.nextInt();
		    K = sc.nextInt();
		    int arr[] = new int[N+1];
		    int mark[] = new int[101];
		    int size = 0, i, num;
		    for(i = 0; i < N; i++)
		    {
		        num = sc.nextInt();
		        if(mark[num] == 0)
		        {
		            arr[size] = num;
		            size++;
		        }
		        mark[num]++;
		    }
		    //Arrays.sort(arr);
		    
		    QuickSort ob = new QuickSort(); 
            ob.sort(arr, 0, size-1); 
		    
		    /*for(i = 0; i < size; i++)
		    {
		        System.out.println(arr[i]);
		    }*/
		    int sum = 0, k = K, temp = 0;
		    for(i = 0; i < size; i++)
		    {
		        if(arr[i] > 0)
		        {
		            temp = sum;
		            sum += mark[arr[i]];
		            if(sum < K)
		            {
		               k--;
		            }
		            else
		            {
		               break;
		            }
		        }
		   }
		    k = K - temp;
		    //System.out.println("i = "+i  +" temp = "+temp + " mark = "+mark[arr[i]]);
		    BigInteger count = BigInteger.ONE, n, nr, r;
		    n = fact(BigInteger.valueOf(mark[arr[i]]));
		    nr = fact(BigInteger.valueOf(mark[arr[i]] - k));
		    r = fact(BigInteger.valueOf(k));
		    //System.out.println("n =  "+n + " ncr = "+nr + " r = "+r);
		    count = n.divide(nr.multiply(r));
		    if(K == 1)
		    {
		        System.out.println(N);
		    }
		    else if(K == N)
		    {
		        System.out.println("1");
		    }
		    else
		    {
		        System.out.println(count);
		    }
		}
	}
}

class QuickSort 
{ 
    int partition(int arr[], int low, int high) 
    { 
        int pivot = arr[high];  
        int i = (low-1); 
        for (int j=low; j<high; j++) 
        { 
            if (arr[j] < pivot) 
            { 
                i++; 
  
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
  
        int temp = arr[i+1]; 
        arr[i+1] = arr[high]; 
        arr[high] = temp; 
  
        return i+1; 
    } 
  
  
    void sort(int arr[], int low, int high) 
    { 
        if (low < high) 
        { 
            int pi = partition(arr, low, high); 
  
            sort(arr, low, pi-1); 
            sort(arr, pi+1, high); 
        } 
    } 
}


