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
	         String str = scanner.next();
	         char ch;
	         int r = 1;
	         String op = "";
	         Stack<Character> s = new Stack<>();
	         for(int i=0;i<str.length();++i) {
	             ch = str.charAt(i);
	             if(Character.isLetterOrDigit(ch)) {
	                 op += ch;
	             } else if(ch == '('){
	                 s.push(ch); 
	             } else if(ch == ')') {
	                 while (!s.isEmpty() && s.peek() != '(') {
	                     op += s.pop();
	                 }
	                 if(!s.isEmpty() && s.peek()!='(') {
	                     i = str.length();
	                     r = 0;
	                 } else {
	                     s.pop();
	                 }
	             } else {
	                 while(!s.isEmpty() && prec(ch) <= prec(s.peek())) {
	                     if(s.peek() == '(') {
	                         r = 0;
	                         i = str.length();
	                     } else {
	                         op += s.pop();
	                     }
	                 }
	                 s.push(ch);
	             }
	         }
	         while (!s.isEmpty()){ 
                if(s.peek() == '(') 
                    r = 0;
                op += s.pop(); 
            }
            if(r==1) {
                System.out.println(op);
            }
	     }
	 }
	 public static int prec(char ch) {
	     switch(ch) {
	         case '+':
	         case '-':
	             return 1;
	             
	         case '*': 
             case '/': 
                 return 2; 
           
             case '^': 
                 return 3; 
	     }
	     return -1;
	 }
}

