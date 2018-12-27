#include<iostream>
using namespace std;

int power(int a,int n)
{
	if(n==0)
	return 1;
	
	int ref=1;
	
	//if n is odd
	if(n%2)
	ref=a;
	
	return ref*power(a*a,n/2);
}


int main()
{
	int a=2,n=10;
	
	cout<<power(a,n);
}
