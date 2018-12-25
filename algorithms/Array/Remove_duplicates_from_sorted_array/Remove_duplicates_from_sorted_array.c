// Simple C program to remove duplicates
#include<stdio.h>
int removeDuplicates(int arr[], int n)
{
	// Return, if array is empty
	// or contains a single element
	if (n==0 || n==1)
		return n;

	int temp[n];

	// Start traversing elements
	int j = 0;
	for (int i=0; i<n-1; i++)

		// If current element is not equal
		// to next element then store that
		// current element
		if (arr[i] != arr[i+1])
			temp[j++] = arr[i];

	// Store the last element as whether
	// it is unique or repeated, it hasn't
	// stored previously
	temp[j++] = arr[n-1];

	// Modify original array
	for (int i=0; i<j; i++)
		arr[i] = temp[i];

	return j;
}

int main()
{
	int n,n1,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

	// removeDuplicates() returns new size of
	// array.
	n1 = removeDuplicates(arr, n);

	// Print updated array
	for (i=0; i<n1; i++)
	printf("%d ",arr[i]);

	return 0;
}
