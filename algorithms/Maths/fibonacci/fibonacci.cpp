#include<iostream>

using namespace std;

int main(){
	int n,i;
	cout<<"Enter number of fibonacci elements to display: ";
	cin>>n;
	int fib[n];
	
	fib[0]=0;
	fib[1]=1;
	
	//Memoising fibonacci elements in an array.
	for(i=2;i<n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	
	//Printing the fibonacci sequence
	for(i=0;i<n;i++){
		cout<<fib[i]<<endl;
	}

	return 0;
}
