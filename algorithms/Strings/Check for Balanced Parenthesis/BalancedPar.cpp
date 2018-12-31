#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include <sstream>
using namespace std;
 
bool isBalanced(string a)
{
	stack<char> store;
	char temp;

	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='(' || a[i]=='{' || a[i]=='[')
		{
			store.push(a[i]);
			continue;
		}

		if(store.empty())
			return false;

		switch(a[i]){

			case ')':
				temp = store.top();
				store.pop();
				if(temp=='[' || temp=='{')
					return false;
				break;
			case '}':
				temp = store.top();
				store.pop();
				if(temp=='[' || temp=='(')
					return false;
				break;
			case ']':
				temp = store.top();
				store.pop();
				if(temp=='{' || temp=='(')
					return false;
				break;

		}

	}

	return(store.empty());

}


int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	string a;
	cin >> a;
	if(isBalanced(a))
		cout << "It's Balanced\n";
	else
		cout << "It's not Balanced\n";
	return 0;
}