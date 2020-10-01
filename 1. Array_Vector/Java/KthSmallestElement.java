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
	         Queue<Integer> minHeap = new PriorityQueue<>();
	         for(int i=0;i<N;++i) {
	             minHeap.add(scanner.nextInt());
	         }
	         int K = scanner.nextInt();
	         while(K-->1) {
	             minHeap.poll();
	         }
	         System.out.println(minHeap.peek());
	     }
	 }
}
