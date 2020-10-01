import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    String str = "Java is a programming language";
		Stack<Character> stack = new Stack<>();
        for(int i=0;i<str.length();++i) {
            stack.push(str.charAt(i));
        }
        String s;
        s = "";
        while(!stack.isEmpty()) {
            s = s + stack.pop();
        }
        System.out.println(s);
	}
}
