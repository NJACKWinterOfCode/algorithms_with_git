// C program to implement Jump Search

#include <stdio.h>
#include<math.h>

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}
int jumpSearch(int arr[], int x, int n)
{
	// Finding block size to be jumped
	int step = sqrt(n);

	// Finding the block where element is
	// present (if it is present)
	int prev = 0;
	while (arr[min(step, n)-1] < x)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}

	// Doing a linear search for x in block
	// beginning with prev.
	while (arr[prev] < x)
	{
		prev++;

		// If we reached next block or end of
		// array, element is not present.
		if (prev == min(step, n))
			return -1;
	}
	// If element is found
	if (arr[prev] == x)
		return prev;

	return -1;
}

int main()

{
	int n,x,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    //Enter the element to searched
    scanf("%d",&x);

	// Find the index of 'x' using Jump Search
	int index = jumpSearch(arr, x, n);

	// Print the index where 'x' is located
	printf("%d is at index %d\n",x,index);
	return 0;
}

// Contributed by saurabhshadow
