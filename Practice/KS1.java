/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int t = Integer.parseInt(br.readLine());

		while (t > 0) {

			int n = Integer.parseInt(br.readLine());

			String inputA[] = br.readLine().trim().split("\\s+");
			
			int a[] = new int[inputA.length];
			
			int i = 0 , j = 0 , k = 0 , l = 0;
			for(i=0;i<inputA.length;i++) {
				a[i] = Integer.parseInt(inputA[i]);
			}
			
			
			//Prefix XOR Array
			int preXOR[] = new int[n];
			
			Map<Integer,List<Integer>> map = new HashMap<Integer,List<Integer>>();
			
			//preXOR[0] = a[0];
			for(i=0;i<n;i++) {
			    if(i == 0)
			    {
			        preXOR[0] = a[0];
			    }
			    else
			    {
			        preXOR[i] = preXOR[i-1] ^ a[i];
			    }
				//System.out.println("preXOR : " + preXOR[i]);
				
				if(map.containsKey(preXOR[i])) {
					
					List<Integer> mapValue = map.get(preXOR[i]);
					mapValue.add(i);
					//Update value in Hashmap
					map.put(preXOR[i],mapValue);
				}
				else {
					List<Integer> mapValue = new ArrayList<Integer>();
					mapValue.add(i);
					//Add Index value
					map.put(preXOR[i],mapValue);
					//System.out.println(map);
				}			

			}
			
			long ans = 0; 
			//HashMap Traversal
			for(Map.Entry<Integer, List<Integer>> m : map.entrySet()) {
				//System.out.println("Key : " + m.getKey() + " , Value : " + m.getValue());
				long index = 0;
				long size = m.getValue().size();
				if(size>0) {
					//Logic --> Calculate distance between pairs of numbers
					for(Integer mapValue : m.getValue()) {
						//Generalized Formula --> Sum of Absolute Differences ==> For any i index : i additions & (n-i-1) subtractions
						ans = ans + (index*mapValue) - (size-index-1)*mapValue;
						if(m.getKey()==0){
							ans+=mapValue;
		                }
						//Index Counter UPDATE
						index++;
					}
					
					//Logic to calculate triplets in the array
					ans-=((size)*(size-1))/2;
				}
				
				
			}

			//System.out.println(map);
			System.out.println(ans);
			
			t--;
		}
	}
}


