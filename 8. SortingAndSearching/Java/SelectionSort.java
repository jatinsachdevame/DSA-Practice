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
	    int index;
	    for(int i=0;i<n;++i) {
	        index = i;
	        for(int j=i+1;j<n;++j) {
	            if(arr[j]<arr[index]) {
	                index = j;
	            }
	        }
	        if(index != i) {
	            int temp = arr[i];
	            arr[i] = arr[index];
	            arr[index] = temp;
	        }
	    }
	    for(int i=0;i<n;++i) {
	        System.out.print(arr[i] + " ");
	    }
	}
}
