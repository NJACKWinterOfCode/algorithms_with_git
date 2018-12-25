#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n,m;cin>>n>>m;
	int a[n][m],k,l;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin >> a[i][j];
	}

	cin >> k >> l;
	for(int i=1;i<m;i++)
		a[0][i] += a[0][i-1];
	for(int i=1;i<m;i++)
		a[i][0] += a[i-1][0];

	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			a[i][j] += min(a[i][j-1],a[i-1][j]);
		}
	}

	cout << "Min Cost path from (1,1) to (k,l): " << a[k-1][l-1]<<endl;
    return 0;
}