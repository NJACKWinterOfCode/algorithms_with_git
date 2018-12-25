#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"The factors of the given number are "<<endl;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<"\t";
        }
    }
    cout<<endl;
    return 0;
}
