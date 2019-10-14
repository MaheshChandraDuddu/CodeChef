/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
     public static String baseConversion(String number, int sBase, int dBase) 
     { 
         try
         {
             return Long.toString(Long.parseLong(number, sBase), dBase); 
         }
         catch(Exception e)
         {
             return "-1";
         }
     } 
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		Long tenpowtwe = 1000000000000L;
		int t = sc.nextInt();
		while(t-- > 0)
		{
		    int N = sc.nextInt();
		    int i;
		    int freq[] = new int[37];
		    LinkedHashMap<String, Integer> map = new LinkedHashMap<String, Integer>();
		    
		    for(i = 1; i <= N; i++)
		    {
		        String s, s1;
		        int B, j;
		        B = sc.nextInt();
		        s = sc.next();
		        //System.out.println(B);
		        //System.out.println(s);
		         LinkedHashMap<String, Integer> map1 = new LinkedHashMap<String, Integer>();
		        if(i == 1)
		        {
		            if(B == -1)
		            {
		                for(j = 2; j <= 36; j++)
		                {
		                    s1 = baseConversion(s, j, 10);
		                    if(s1.compareTo("-1") != 0)
		                    {
		                        if(map.containsKey(s1) == false)
		                        {
		                            map.put(s1, j);
		                        }
		                    }
		                }
		            }
		            else
		            {
		                s1 = baseConversion(s, B, 10);
		                if(s1.compareTo("-1") != 0)
		                {
		                    map.put(s1, B);
		                }
		            }
		        }
		        else
		        {
		            if(B == -1)
		            {
		                for(j = 2; j <= 36; j++)
		                {
		                    s1 = baseConversion(s, j, 10);
		                    if(s1.compareTo("-1") != 0)
		                    {
		                        //System.out.println("1bc = "+baseConversion(s,j,10));
		                        //System.out.println("contains = "+map.containsValue(baseConversion(s,j,10)));
		                        if(map.containsKey(s1) == true && map1.containsKey(s1) != true)
		                        {
		                           map1.put(s1, j);
		                           freq[map.get(s1)]++;
		                        }
		                    }
		                }
		            }
		            else
		            {
		                //System.out.println("bc = "+baseConversion(s,B,10));
		                //System.out.println("contains = "+map.containsValue(baseConversion(s,B,10)));
		                s1 = baseConversion(s, B, 10);
		                if(map.containsKey(s1) == true && map1.containsKey(s1) != true)
		                {
		                    map1.put(s1, B);
		                    freq[map.get(s1)]++;
		                }
		            }
		        }
		        //System.out.println("map = "+map);
		    }
		    //System.out.println("freq = "+freq);
		    int check = 0;
		    long ans = -1;
		    /*for(i = 2; i <= 36; i++)
		    {
		        //System.out.println("freq = "+freq[i]);
		        if(freq[i] == N-1)
		        {
		            check = 1;
		            break;
		        }
		    }*/
		    //System.out.println("Map = "+ map);
		     Set entrySet = map.entrySet();
		     Iterator it = entrySet.iterator();
		     if(N != 1)
		     {
		         while(it.hasNext())
		     {
		         Map.Entry item = (Map.Entry)it.next();
		         int shit = Integer.parseInt(item.getValue().toString());
		         if(freq[shit] == N-1)
		         {
		             ans = Long.parseLong(item.getKey().toString());
		             check = 1;
		             break;
		         }
		     }
		     }
		     else
		     {
		            while(it.hasNext())
		     {
		         Map.Entry item = (Map.Entry)it.next();
		         ans = Long.parseLong(item.getKey().toString());
		         break;
		     }
		     }
		     if(ans > 1000000000000L)
		     {
		         System.out.println("-1");
		     }
		     else
		     {
		         System.out.println(ans);
		     }
		}
	}
}

