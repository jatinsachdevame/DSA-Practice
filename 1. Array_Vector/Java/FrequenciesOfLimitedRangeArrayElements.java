#Frequencies of Limited Range Array Elements

import java.util.*;
import java.lang.*;
import java.io.*;

class Freq {
	public static void main (String[] args) throws IOException{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	int t = Integer.parseInt(br.readLine()); 
		
		
		while(t-->0){
		    int n = Integer.parseInt(br.readLine()); 
		     String inputLine[] = br.readLine().trim().split(" ");
		    int arr[] =new int[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i]=Integer.parseInt(inputLine[i]);
		    }
		    
		    HashMap<Integer,Integer> hm = new HashMap<>();
		    for(int i=1; i<=n; i++){
		     hm.put(i,0);
		    }
		    
		    for(int j=0; j<n; j++){
		        if(hm.containsKey(arr[j])){
		            hm.put(arr[j],hm.get(arr[j])+1);
		        }
		    }
		    
		  
		   StringBuffer sb = new StringBuffer();
		    for(int val: hm.values()){
		          sb.append(val+" ");
		      }
		      
		   
		    System.out.println(sb);    
		    
		    
		}
	}
}
