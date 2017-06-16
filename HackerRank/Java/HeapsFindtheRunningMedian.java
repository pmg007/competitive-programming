import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Comparator;
import java.util.InputMismatchException;
import java.util.PriorityQueue;
public class HeapsFindtheRunningMedian {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		InputReader in=new InputReader(System.in);
		PrintWriter out=new PrintWriter(System.out,true);
		int n=in.readInt(),a[]=new int[n];
		for(int i=0;i<n;i++)a[i]=in.readInt();
		double median;
		PriorityQueue<Integer> lowers=new PriorityQueue<Integer>(new Comparator<Integer>() {
			public int compare(Integer a, Integer b){
				return -1*a.compareTo(b);
			}
		});
		PriorityQueue<Integer> highers=new PriorityQueue<Integer>();
		for(int i:a){
			if(lowers.isEmpty()) lowers.add(i);
			else{
				if(lowers.size()>highers.size()){
					if(lowers.peek()>i) {
						highers.add(lowers.poll());
						lowers.add(i);
					}else {
						highers.add(i);
					}
				} else{
					Integer p=highers.peek();
					if(p!=null && p>=i){
						lowers.add(i);
					}else{
						lowers.add(highers.poll());
						highers.add(i);
					}
				}
			}
			int s=highers.size()+lowers.size();
			if((s&1)==0) out.println((lowers.peek()+highers.peek())/2.0);
			else out.println((double)lowers.peek());
		}
		
	}	
}
