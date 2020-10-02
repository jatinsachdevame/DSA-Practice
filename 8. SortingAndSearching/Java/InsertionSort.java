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
	    int key;
	    int j;
	    for(int i=0;i<n;++i) {
	        key = arr[i];
	        j = i-1;
	        while (j>=0 && arr[j]>key) { 
                arr[j+1] = arr[j]; 
                j = j-1; 
            } 
            arr[j+1] = key; 
	    }
	    for(int i=0;i<n;++i) {
	        System.out.print(arr[i] + " ");
	    }
	}
}
