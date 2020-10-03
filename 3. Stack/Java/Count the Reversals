# Count the Reversals 

import java.util.*;
import java.lang.*;
import java.io.*;

class Reversals {
	public static void main (String[] args) throws IOException{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    int t = Integer.parseInt(br.readLine());
	    
	while(t-->0){
	    String str = br.readLine();
	     Stack <Character> stack = new Stack<>();
	    int n = str.length();

	    for(int i=0; i<n; i++){
	    char c = str.charAt(i);
	    
	     if( c=='}' && !stack.isEmpty()){
	         if(stack.peek()=='{'){
	             stack.pop();
	         }
	         else{
	             stack.push(c);
	         }
	     }
	     else{
	         stack.push(c);
	     }
	        
	    }
	    int len = stack.size(); 
      
        int m = 0; 
        while (!stack.empty() && stack.peek() == '{') 
        { 
            stack.pop(); 
            m++; 
        }
        
        if(n%2!=0){
	        System.out.println(-1);
	    }
	    else{
        System.out.println(len/2 + m%2); 
	    }
	}
}
}
