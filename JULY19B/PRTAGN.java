/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static class Reader 
    { 
        final private int BUFFER_SIZE = 1 << 16; 
        private DataInputStream din; 
        private byte[] buffer; 
        private int bufferPointer, bytesRead; 
  
        public Reader() 
        { 
            din = new DataInputStream(System.in); 
            buffer = new byte[BUFFER_SIZE]; 
            bufferPointer = bytesRead = 0; 
        } 
  
        public Reader(String file_name) throws IOException 
        { 
            din = new DataInputStream(new FileInputStream(file_name)); 
            buffer = new byte[BUFFER_SIZE]; 
            bufferPointer = bytesRead = 0; 
        } 
  
        public String readLine() throws IOException 
        { 
            byte[] buf = new byte[64]; // line length 
            int cnt = 0, c; 
            while ((c = read()) != -1) 
            { 
                if (c == '\n') 
                    break; 
                buf[cnt++] = (byte) c; 
            } 
            return new String(buf, 0, cnt); 
        } 
  
        public int nextInt() throws IOException 
        { 
            int ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do
            { 
                ret = ret * 10 + c - '0'; 
            }  while ((c = read()) >= '0' && c <= '9'); 
  
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        public long nextLong() throws IOException 
        { 
            long ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do { 
                ret = ret * 10 + c - '0'; 
            } 
            while ((c = read()) >= '0' && c <= '9'); 
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        public double nextDouble() throws IOException 
        { 
            double ret = 0, div = 1; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
  
            do { 
                ret = ret * 10 + c - '0'; 
            } 
            while ((c = read()) >= '0' && c <= '9'); 
  
            if (c == '.') 
            { 
                while ((c = read()) >= '0' && c <= '9') 
                { 
                    ret += (c - '0') / (div *= 10); 
                } 
            } 
  
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        private void fillBuffer() throws IOException 
        { 
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE); 
            if (bytesRead == -1) 
                buffer[0] = -1; 
        } 
  
        private byte read() throws IOException 
        { 
            if (bufferPointer == bytesRead) 
                fillBuffer(); 
            return buffer[bufferPointer++]; 
        } 
  
        public void close() throws IOException 
        { 
            if (din == null) 
                return; 
            din.close(); 
        } 
    } 
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
	//	wr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(
			//	System.out)));
	//	ir = new InputReader(System.in);
		Reader sc = new Reader(); ;
		int t = sc.nextInt();
		
		while(t-- > 0)
		{
		    LinkedHashSet<Integer> set = new LinkedHashSet<Integer>();
		    //LinkedHashSet<Integer> set1 = new LinkedHashSet<Integer>();
		    int Q, E_count = 0, O_count = 0, X;
		    Q = sc.nextInt();
		    
		    while(Q-- > 0)
		    {
		        int i, check;
		        X = sc.nextInt();
		        LinkedHashSet<Integer> set1 = new LinkedHashSet<Integer>();
		        Iterator<Integer> value = set.iterator();
		        if(set.contains(X) != true)
		        {
		            if(Integer.bitCount(X) % 2 == 0)
		            {
		                E_count++;
		          
		            }
		            else
		            {
		                O_count++;
		            }
		            if(set.contains(X) != true)
		            {
		                while(value.hasNext())
		                {
		                    int temp = (int)(value.next());
		                    if(Integer.bitCount(temp ^ X)%2 == 0)
		                    {
		                        E_count++;
		                    }
		                    else
		                    {
		                        O_count++;
		                    }
		                    set1.add(temp^X);
		                }
		                set.add(X);
		                set.addAll(set1);
		                set1.add(X);
		            }
		        }
		        //System.out.println("Set = " +set);
		        //System.out.println("set1 = " +set1);
		        //System.out.println("Union set = " +union);
		        System.out.println(E_count + " " + O_count);
		    }
		}
	}
}
