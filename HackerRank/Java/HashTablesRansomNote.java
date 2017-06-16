import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.HashMap;
import java.util.InputMismatchException;
public class HashTablesRansomNote {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		InputReader in=new InputReader(System.in);
		PrintWriter out=new PrintWriter(System.out,true);
		int m=in.readInt(),n=in.readInt(),k=1;
		HashMap<String,Integer> h = new HashMap<String, Integer>();
		for(int i=0;i<m;i++){
			String a=in.readString();
			if(h.containsKey(a)) h.put(a,h.get(a)+1);
			else h.put(a, 1);
		}
		for(int i=0;i<n;i++) {
			String b=in.readString();
			if(h.get(b)>=1) h.put(b, h.get(b)-1);
			else k=0;
		}
		if(k==1)out.println("Yes");else out.println("No");
	}
}
