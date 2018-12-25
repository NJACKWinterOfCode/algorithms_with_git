#include <bits/stdc++.h> 
using namespace std; 

int power(int x, int y, int p) 
{ 
	int res = 1; 
	x = x % p;

	while (y > 0) 
	{ 
		if (y & 1) 
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p; 
	} 
	return res;
} 

void sqRoot(int n, int p) 
{ 
	if (p % 4 != 3) 
	{ 
		cout << "Invalid value of p.\n"; 
		return; 
	} 
	n = n % p; 
	int x = power(n, (p + 1) / 4, p); 
	if ((x * x) % p == n) 
	{ 
		cout << "Square root is: " << x << endl; 
		return;
	} 
	x = p - x; 
	if ((x * x) % p == n) 
	{ 
		cout << "Square root is " << x << endl; 
		return; 
	}
	cout << "Square root doesn't exist!\n";
}

int main() 
{
	int p,n;
	cout << "Enter the value of p: ";  
	cin >> p;
	cout << "Enter the value of n: ";  
	cin >> n;
	sqRoot(n, p); 
	return 0; 
}
