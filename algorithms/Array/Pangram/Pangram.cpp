#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int i,j,count=0,l;
    int a[26]={0};
    char s[100] ;
    cin.getline(s,sizeof(s));
    l = strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>=65 && s[i]<= 90)
            a[s[i]-'A']++;
        else 
        a[s[i]-'a']++;    
    }
    for(i=0;i<26;i++)
        if(a[i]!=0)
            count++;
    if(count==26)
        cout << "Its a Pangram\n";
    else 
        cout << "Its not a Pangram\n";

    return 0;
}
