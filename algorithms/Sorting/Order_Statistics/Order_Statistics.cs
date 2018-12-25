using System; 

class KthSmallst 
{ 
    int kthSmallest(int []arr, int l, int r, int k) 
    { 
        if (k > 0 && k <= r - l + 1) 
        { 
            int pos = randomPartition(arr, l, r); 
            if (pos-l == k - 1) 
                return arr[pos]; 
            if (pos - l > k - 1) 
                return kthSmallest(arr, l, pos - 1, k); 
            return kthSmallest(arr, pos + 1, r, 
                            k - pos + l - 1); 
        } 
        return int.MaxValue; 
    }
    void swap(int []arr, int i, int j) 
    { 
        int temp = arr[i]; 
        arr[i] = arr[j]; 
        arr[j] = temp; 
    } 
    int partition(int []arr, int l, int r) 
    { 
        int x = arr[r], i = l; 
        for (int j = l; j <= r - 1; j++) 
        { 
            if (arr[j] <= x) 
            { 
                swap(arr, i, j); 
                i++; 
            } 
        } 
        swap(arr, i, r); 
        return i; 
    } 
    int randomPartition(int []arr, int l, int r) 
    { 
        int n = r - l + 1; 
        Random rnd = new Random(); 
        int rand = rnd.Next(0, 1); 
        int pivot = (int)(rand * (n - 1)); 
        swap(arr, l + pivot, r); 
        return partition(arr, l, r); 
    } 
    public static void Main() 
    { 
        KthSmallst ob = new KthSmallst();
        int n = Int32.Parse( System.Console.ReadLine().Trim());
		int[] arr = new int[n];
        for(int i=0;i<n;i++){
            int a = Int32.Parse( System.Console.ReadLine().Trim());
            arr[i]=a;
        } 
		int k = Int32.Parse( System.Console.ReadLine().Trim());
        Console.Write("K'th smallest element is "+ ob.kthSmallest(arr, 0, n - 1, k)); 
    } 
}