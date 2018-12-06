
#include <bits/stdc++.h> 
using namespace std;

void lpsArray(string pat, int M, int lps[])
{
    int len=0;
    lps[0]=0;
    int i=1;
     
    while(i<M){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}

void KMPsearch( string text, string pat){
    vector <int> v;
    int M=pat.length();
    int N=text.length();
    int i=0,j=0,count=0;

    int lps[M];
    lpsArray(pat,M,lps);

    while(i<N){
        if(pat[j]==text[i]){
            i++;
            j++;
        }
        if(j==M){
            
            count++;
            v.push_back(i-j);
            j=lps[j-1];
        }
        else if(i<N&&pat[j]!=text[i]){
            if(j!=0){
                j=lps[j-1];
            }
            else {
                i++;
            }
        }
    }
    cout<<"Number of times pattern's found in the text is: "<<count<<"\n";
    if(count){
        cout<<"Pattern is found at these indices in the text : ";
        for(int x=0;x<v.size();x++)
            cout<<v[x]<<" ";
        cout<<"\n";        
    }
}

int main() 
{ 
	string text, pat;
    
    getline(cin,text);
    getline(cin,pat);

	KMPsearch(text,pat); 
	return 0; 
} 

