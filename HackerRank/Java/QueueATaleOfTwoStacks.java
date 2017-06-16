import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.InputMismatchException;
public class QueueATaleOfTwoStacks {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		InputReader in = new InputReader(System.in);
		PrintWriter out=new PrintWriter(System.out,true);
		int q=in.readInt(),i=0,noe=0,f;
		int a[]=new int[100005];
		while(q-->0){
			int x=0,type=in.readInt();
			if(type==1)x=in.readInt();
			if(type==1){
				a[noe]=x;
				noe+=1;
			}else if(type==2){
				i+=1;				
			}else if(type==3){out.println(a[i]);}
		}
	}
}
