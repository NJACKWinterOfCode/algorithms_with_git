#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int p,int r)
{
	int x=a[r];
	int i,j;
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(x>a[j])
		{
			i=i+1;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);

	return (i+1);
}

void quicksort(int a[],int l,int r)
{
	if(l<r)
	{
		int k=partition(a,l,r);
		quicksort(a,l,k-1);
		quicksort(a,k+1,r);
	}
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
