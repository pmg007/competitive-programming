import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.InputMismatchException;
import java.util.Stack;
public class StacksBalancedBrackets {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		InputReader in = new InputReader(System.in);
		PrintWriter out = new PrintWriter(System.out,true);
		int n=in.readInt();
		while(n-->0){
			String s=in.readString();int f=1,len=s.length();
			Stack<Character> st=new Stack<Character>();
			char ss[]=s.toCharArray();
			if((len&1)!=0){out.println("NO");continue;}
			for(int i=0;i<len;i++){
				if(ss[i]=='('){
					st.push(ss[i]);
				}
				else if(ss[i]=='{'){
					st.push(ss[i]);
				}
				else if(ss[i]=='['){
					st.push(ss[i]);
				}
				else if(ss[i]==')'){
					if(!st.isEmpty()){
						if(st.peek()!='(')f=0;
						st.pop();
					}else {f=0;break;}
					
				}
				else if(ss[i]=='}'){
					if(!st.isEmpty()){
						if(st.peek()!='{')f=0;
						st.pop();
					}else {f=0;break;}
				}
				else if(ss[i]==']'){
					if(!st.isEmpty()){
						if(st.peek()!='[')f=0;
						st.pop();
					}else {f=0;break;}
			}
			}
			if(st.isEmpty() && f==1)out.println("YES");else out.println("NO");	
			
	}

	}
}
