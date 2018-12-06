import java.util.Scanner;

class HeapSort{
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] a){
		int size;
		System.out.println("How many numbers do you want in the array?");
		size = scan.nextInt();
		int[] array;
		System.out.println("Enter "+size+" values:");
		array = getIntegers(size);
		printIntegers(array);
		System.out.println();
		HeapSort ob = new HeapSort();
		ob.sortIntegers(array);
		printIntegers(array);
	}
	
	static int[] getIntegers(int size){
		int[] array = new int[size];
		for(int i=0;i<size;i++)
			array[i] = HeapSort.scan.nextInt();
		return array;
	}
	
	static void printIntegers(int[] array){
		for(int i=0;i<array.length;i++)
			System.out.printf("%4d",array[i]);
	}
	
	void sortIntegers(int[] array){
		int n = array.length;
		//making a max heap
		for(int i= (n/2)-1;i>=0;i--)
			heapify(array,n,i);
				
		//removing elements one by one by swapping
		for(int i=n-1;i>0;i--){
			int swap = array[0];
			array[0] = array[i];
			array[i] = swap;
			//swapping done. Now tree needs to be heapified again from the top node, as all the nodes below are already 				heapified
			heapify(array,i,0); 
		}	
	}
	
	static void heapify(int[] array, int size, int i){
		int largest = i;
		int l = 2*i + 1;
		int r = l + 1;
		
		if(l<size && array[l] > array[largest])
			largest = l;
			
		if(r<size && array[r] > array[largest])
			largest = r;
			
		if(largest != i){
			int swap = array[i];
			array[i] = array[largest];
			array[largest] = swap;
			
			heapify(array,size,largest);
		}
	}
}
