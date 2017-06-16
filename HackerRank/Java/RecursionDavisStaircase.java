import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.InputMismatchException;
public class RecursionDavisStaircase {
	public static int solFib(int n){
		int t1=1,t2=2,t3=4,t4=0;
		if(n==1) return t1;
		else if(n==2) return t2;
		else if(n==3)return t3;
		for(int i=0;i<n-3;i++){
			t4=t3+t2+t1;
			t1=t2;t2=t3;t3=t4;
		}
		return t4;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		InputReader in =new InputReader(System.in);
		PrintWriter out=new PrintWriter(System.out,true);
		int s=in.readInt();
		while (s-->0) {
			out.println(solFib(in.readInt()));
		}
	}
}
