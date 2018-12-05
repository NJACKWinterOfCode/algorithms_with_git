#include<iostream>
using namespace std;


//quicksort is O(n^2) worst case and O(n logn) in average case
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}

int partition(int *a, int start, int end)
{
    int pivot = a[end]; //here we select the last element as pivot 
    int partition_index = start;

    for(int i=start; i<end; i++) //the last element is the pivot, so we dont have to check the last element
    {
        if(a[i] < pivot)
        {
            swap(a[i],a[partition_index]);
            partition_index++;
        }

    }

    swap(a[end], a[partition_index]);

    return partition_index;

}

void quicksort(int *a, int start, int end )
{
    if(start >= end)    //only using the start==end condition won't work, 
                     //because if pivotindex is 0, then pivotindex-1 = -1
   return;

    int pivot_index = partition(a, start, end);
    //cout<<"start = "<<start<<" end = "<<end<<" pivot index = "<<pivot_index<<endl;
    quicksort(a, start, pivot_index -1);
    quicksort(a, pivot_index +1, end);

   
}

int main()
{
	int i,arr[100],n;
	printf("Enter size of array::");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

		quicksort(arr,0,n-1);
	printf("Sorted array::");
		for(i=0;i<n;i++)
		printf("%d  ",arr[i]);


		return 0;
}

