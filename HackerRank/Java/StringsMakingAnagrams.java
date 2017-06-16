import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.InputMismatchException;
public class StringsMakingAnagrams {
	public static int numberNeeded(String a, String b){
		int ans=0,arr[]=new int[26],arr1[]=new int[26];Arrays.fill(arr, 0);Arrays.fill(arr1, 0);
		for(int i=0;i<a.length();i++) arr[a.charAt(i)-'a']+=1;
		for(int i=0;i<b.length();i++)arr1[b.charAt(i)-'a']+=1;
		for(int i=0;i<26;i++)ans+=Math.abs(arr[i]-arr1[i]);		
		return ans;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		InputReader in=new InputReader(System.in);
		PrintWriter out=new PrintWriter(System.out,true);
		String a=in.readString(),b=in.readString();
		out.println(numberNeeded(a,b));
	}
}
