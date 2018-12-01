#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void heapify(int a[],int i,int n)
{
	int l=2*i;
	int r=(2*i)+1;
	int largest=i;
	if(l<=n&&a[l]>a[i])
		largest=l;
	if(r<=n&&a[r]>a[largest])
		largest=r;


	if(largest!=i)
	{
		swap(&a[largest],&a[i]);
		heapify(a,largest,n);
	}
}
void build_max(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		heapify(a,i,n);
}

void heapsort(int a[],int n)
{
	int i;
	build_max(a,n);
	for(i=n;i>=2;i--)
	{

	swap(&a[1],&a[i]);
	n=n-1;
	heapify(a,1,n);
	}


}



int main(void)
{
	int arr[100],i,n;
	printf("Enter size of heap");
	scanf("%d",&n);
	printf("Enter elements::");
	for(i=1;i<=n;i++)
	scanf("%d",&arr[i]);

	heapsort(arr,n);

	printf("After sorting ::");
	for(i=1;i<=n;i++)
	{
		printf("%d  ",arr[i]);
	}

	return 0;
}
