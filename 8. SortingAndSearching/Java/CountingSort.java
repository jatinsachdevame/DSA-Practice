#Counting Sort

import java.util.*;
import java.lang.*;

class Countsort
{
public static void main(String args[])
{
   Scanner sc = new Scanner(System.in);
   
   int t = sc.nextInt();
   
   while(t-->0)
   {
   long n = sc.nextLong();
   
   char seq[] = new char[int(n+1)];
   
   String str="";
   
   seq = str.toCharArray();
   
   Count obj = new Count();
   
   obj.countsort(seq);
   
   System.out.println(seq);
   
 }
 
}

class Count
{
    
   
    public static void countSort(char seq[])
    {  
        
        int n = seq.length;
        
        char B[] = new char[n];
        
        int C[]= new int[256];
        
        Arrays.fill(C,0);
        
        for(int i=0; i<n; ++i){
            C[seq[i]] = C[seq[i]]+1;
        }
        
        for(int i=1; i<=255; ++i){
            C[i] = C[i]+C[i-1];
        }
        
        for(int i=n-1; i>=0; i--){
            B[--C[seq[i]]] = seq[i]; 
        }
        
       for(int i=0; i<n; ++i){
           seq[i] = B[i]; 
       }
        
        
        
    }
}
