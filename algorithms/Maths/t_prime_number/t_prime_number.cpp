#include<bits/stdc++.h>
using namespace std;
int check_perfect_square(long long n)
{
    double a=sqrt(n);
    if(a==int(a))
	{
        return 1;
    }
    else
	{
        return 0;
    }
}
int isPrime(int n) 
{
    if(n<=1)  
	return 0; 
    if(n<=3)  
	return 1;
	if(n%2==0||n%3==0) 
	return 0;
    for (int i=5; i*i<=n; i=i+6)
    {
    	if(n%i==0||n%(i+2)==0) 
        return 0; 
	}
  	return 1; 
} 
int main()
{
    long long n;
        cin>>n;
        if (n==4)
		{
            cout<<"YES"<<endl;
        }
        else if (n%2==0)
		{
            cout<<"NO"<<endl;
        }
        else if(check_perfect_square(n)==1 && isPrime(int(sqrt(n)))==1)
		{
            cout<<"YES"<<endl;
        }
        else
		{
            cout<<"NO"<<endl;
        }
}
