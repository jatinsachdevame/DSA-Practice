import java.util.*;
import java.lang.*;
import java.io.*;
class Main
 {
	public static void main (String[] args)
	 {
	     int T;
	     Scanner scanner = new Scanner(System.in);
	     T = scanner.nextInt();
	     while(T-->0) {
	         String str = scanner.next();
	         int N = str.length();
	         char temp;
	         Stack<Character> stack = new Stack<>();
	         int r = 0;
	         char p;
	         for(int i=0;i<N;++i) {
	             temp = str.charAt(i);
	             if(temp == '(' || temp == '{' || temp == '[') {
	                 stack.push(temp);
	             } else if(temp == ')' || temp == '}' || temp == ']') {
	                 if(stack.isEmpty()) {
	                     i = N;
	                     r = 1;
	                 } else {
	                     p = stack.pop();
	                     if( (p=='(' && temp == ')') || (p == '[' && temp == ']') || (p == '{' && temp == '}') ) {
	                         //
	                     } else {
	                         i = N;
	                         r = 1;
	                     }
	                 }
	             }
	         }
	         //{}{(}))}
	         if(stack.isEmpty() && r==0){
	             System.out.println("balanced");
	         } else {
	             System.out.println("not balanced");
	         }
	     }
	 }
}
