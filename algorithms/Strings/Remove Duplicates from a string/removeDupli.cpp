#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include <sstream>
using namespace std;
#define MAX 999999

char *removeDupli(char *a)
{
	int Index=0, resultIndex=0;
	bool hash[256] = {0};
	char temp;

	while(*(a+Index)){
		
		temp = *(a+Index);
	if(hash[temp]==0)
	{
		hash[temp]=1;
		*(a+resultIndex) = *(a+Index);
		resultIndex++;
	}

	Index++;
	}

	*(a+resultIndex) = '\0';
	return a;
}


int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	char a[MAX];
	cin >> a;
	cout << "Resulted String : " << removeDupli(a)<<endl;
	return 0;
}