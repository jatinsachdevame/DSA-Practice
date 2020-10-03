# Leaders in an Array

import java.util.*;
import java.lang.*;
import java.io.*;

class Leaders {
	public static void main (String[] args) throws IOException{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	
	int t = Integer.parseInt(br.readLine().trim());
		
		while(t-->0){
		    int n = Integer.parseInt(br.readLine().trim());
		    int arr[] = new int[n];
		    String inputLine[] = br.readLine().trim().split(" ");
		    
		    for(int i=0; i<n; i++){
		        arr[i] = Integer.parseInt(inputLine[i]);
		        
		    }
		    int max=arr[n-1];
		    StringBuffer sb = new StringBuffer();
		    
		    ArrayList<Integer> result = new ArrayList<Integer>();
		    
		    for(int i=n-1; i>=0; i--){
		    if(arr[i]>=max){
		        max = arr[i];
		        result.add(max);
		       
		    }
		    }
		 for(int i=result.size()-1; i>=0; i--){
		  sb.append(result.get(i)+" ");
		  }
		  	System.out.println(sb);
		}
	
	}
}
