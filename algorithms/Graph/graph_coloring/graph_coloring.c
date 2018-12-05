#include<stdio.h>
int G[10][10],m,x[11];
void nextvalue(int k,int n)
{
	int j;
	while(1)
	{
		int a=(x[k]+1);
		int b=(m+1);
		x[k]=a%b;
		if(x[k]==0)
			return;

		for(j=1;j<=n;j++)
		{
			if(G[k][j]!=0 && x[j]==x[k])
				break;
		}
		if(j==(n+1))
			return;

	}
}

void mcoloring(int k,int n)
{	int i;
  while(1)
  {
		nextvalue(k,n);
		if(x[k]==0)
		return;
		if(k==n)
		{
			for(i=1;i<=n;i++)
			{
				printf("%d ",x[i]);
			}
			printf("\n");
		}
		else
			mcoloring(k+1,n);

    }
}

int main()
{
	int e,i,j,v;
	int source,dest;
	printf("Enter no of nodes and edges::");
	scanf("%d%d",&v,&e);
	m=v-1;
	for(i=1;i<=e;i++)
	{
		printf("Enter edge from source to destination::");
		scanf("%d%d",&source,&dest);
		G[source][dest]=1;
		G[dest][source]=1;
	}

	mcoloring(1,v);

	return 0;

}
