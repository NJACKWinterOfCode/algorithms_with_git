#include<iostream>

using namespace std;

int main(){
	int n,i,j;
	cin>>n;
	
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	//Starting Bubble sort algorithm
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}


	//Printing of sorted array starts
	cout<<"Sorted array is: "<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}
