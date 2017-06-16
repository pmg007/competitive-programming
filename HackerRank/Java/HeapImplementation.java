import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.InputMismatchException;
//using Min-Heap Concept
public class HeapImplementation {
	private int capacity=10;
	private int size=0;
	int [] items= new int[capacity];
	
	private int getLeftChildIndex(int parentIndex) {return parentIndex*2+1;}
	private int getRightChildIndex(int parentIndex) {return parentIndex*2+2;}
	private int getParentIndex(int childIndex) {return (childIndex-1)/2;}
	
	private boolean hasLeftChild(int index) {return getLeftChildIndex(index)<size;}
	private boolean hasRightChild(int index) {return getRightChildIndex(index)<size;}
	private boolean hasParent(int index) {return getParentIndex(index)>=0;}
	
	private int leftChild(int index) {return items[getLeftChildIndex(index)];}
	private int rightChild(int index) {return items[getRightChildIndex(index)];}
	private int parent(int index) {return items[getParentIndex(index)];}
	
	//function to swap elements using indices as parameters
	private void swap(int indexOne, int indexTwo){
		int temp=items[indexOne];
		items[indexOne]=items[indexTwo];
		items[indexTwo]=temp;
	}
	//function to ensure capacity in array else increase the capacity of array
	private void ensureExtraCapacity(){
		if(size==capacity){
			items=Arrays.copyOf(items, (capacity<<2));
			capacity<<=2;
		}
	}
	//function to get the first element, i.e. the minimum element
	public int peek(){
		if(size==0) throw new IllegalStateException();
		return items[0];
	}
	// function to remove the first element
	public int poll(){
		if(size==0) throw new IllegalStateException();
		int item=items[0];
		items[0]=items[size-1];
		size--;
		heapifyDown();
		return item;
	}
	//function to add element to the heap
	public void add(int item){
		ensureExtraCapacity();
		items[size]=item;
		size++;
		heapifyUp();
	}
	//function to heapify upwards
	public void heapifyUp() {
		int index=size-1;
		while(hasParent(index) && parent(index)>items[index]){
			swap(getParentIndex(index),index );
			index=getParentIndex(index);
		}		
	}
	//function to heapify downwards
	public void heapifyDown() {
		int index=0;
		while(hasLeftChild(index)){
			int smallerChildIndex=getLeftChildIndex(index);
			if(hasRightChild(index)&& rightChild(index)<leftChild(index)){
				smallerChildIndex=getRightChildIndex(index);
			}
			if(items[index]<items[smallerChildIndex]) break;
			else swap(index, smallerChildIndex);
			index=smallerChildIndex;
		}		
	}
	// the main function
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		InputReader in=new InputReader(System.in);
		PrintWriter out=new PrintWriter(System.out,true);
		HeapImplementation heapImplementation=new HeapImplementation();
		heapImplementation.add(12);
		heapImplementation.add(4);
		heapImplementation.add(5);
		heapImplementation.add(3);
		heapImplementation.add(8);
		heapImplementation.add(7);
		for (int i=0;i<heapImplementation.size;i++) {
			System.out.print(heapImplementation.items[i]+" ");
		}
		out.println();
		out.println(heapImplementation.peek());
		heapImplementation.poll();
		heapImplementation.poll();
		out.println(heapImplementation.peek());
		for (int i=0;i<heapImplementation.size;i++) {
			System.out.print(heapImplementation.items[i]+" ");
		}
	}
}
