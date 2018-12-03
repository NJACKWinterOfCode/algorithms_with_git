#include<iostream>
#include<limits.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
 
    int arr[n];

    for(int i=0;i<n;i++)
     cin>>arr[i];
   
    int maximum= -INT_MAX;

    for(int i=0;i<n;i++)
     if(maximum<arr[i])
      maximum= arr[i];

    cout<<maximum<<endl;  
}