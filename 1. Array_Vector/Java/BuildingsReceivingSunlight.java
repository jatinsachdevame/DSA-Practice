/*
Given are the heights of certain Buildings which lie adjacent to each other. Sunlight starts falling from left side of the buildings. 
If there is a building of certain Height, all the buildings to the right side of it having lesser heights cannot see the sun . 
The task is to find the total number of such buildings that receive sunlight.
*/

import java.util.*;
import java.lang.*;
import java.io.*;
class Main
 {
	public static void main (String[] args)
	 {
	     int T, N;
	     Scanner scanner = new Scanner(System.in);
	     T = scanner.nextInt();
	     while(T-->0) {
	         N = scanner.nextInt();
	         int[] arr = new int[N];
	         for(int i=0;i<N;++i) {
	             arr[i] = scanner.nextInt();
	         }
	         int max = arr[0];
	         int count = 1;
	         for(int i=1;i<N;++i) {
	             if(arr[i]<max) {
	             } else if(arr[i] == max) {
	                 count++;
	             } else {
	                 count++;
	                 max = arr[i];
	             }
	         }
	         System.out.println(count);
	     }
	 }
}
