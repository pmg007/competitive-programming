import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.InputMismatchException;
public class BinarySearchIceCreamParlor {
	public static int binarySearch(int a[], int start, int last,int num) {
		if(start>last)return -1;
		int index=-1;
		int mid=start+(last-start)/2;
		if(a[mid]==num) {index=mid;return index;}
		else if(num<a[mid]){
			last=mid-1;
			index=binarySearch(a, start, last, num);
		}else{
			start=mid+1;
			index=binarySearch(a, start, last, num);
		}
		return index;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		InputReader in =new  InputReader(System.in);
		PrintWriter out=new PrintWriter(System.out,true);
		//StringBuilder sb=new StringBuilder("");
		int t=in.readInt();
		while(t-->0) {
			int m=in.readInt(),n=in.readInt(),a[]=new int[n],b[]=new int[10005],c[]=new int[10005];
            for(int i=0;i<n;i++)  {a[i]=in.readInt();b[a[i]]=(b[a[i]]==0)?i+1:b[a[i]];c[a[i]]=i+1;}
			Arrays.sort(a);
			for(int i=0;i<n;i++){
				int temp=m-a[i];
				int ii=binarySearch(a, 0, n-1, temp);
				if(ii>=0){                    
					out.println(Math.min(b[a[i]],c[a[ii]])+" "+Math.max(c[a[ii]],b[a[i]]));break;
				}
			}
		}
	}
}