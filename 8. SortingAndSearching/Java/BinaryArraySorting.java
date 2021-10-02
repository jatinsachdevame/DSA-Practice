import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    int n;
	    
	    Scanner scanner = new Scanner(System.in);
	    n = scanner.nextInt();
	    int[] arr = new int[n];
	    
	    for(int i=0;i<n;++i) {
	        arr[i] = scanner.nextInt();
	    }
	    
	    int c1 = 0;
	    int c2 = 0;
	    for(int i=0;i<n;++i) {
	        if(arr[i] == 0) {
	            c1++;
	        } else {
	            c2++;
	        }
	    }
	    for(int i=0;i<n;++i) {
	        if(c1-->0) {
	            arr[i] = 0;
	        } else {
	            arr[i] = 1;
	        }
	    }
	    
	    for(int i=0;i<n;++i) {
	        System.out.print(arr[i] + " ");
	    }
	}
}
