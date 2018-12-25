#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define PI 3.14159265358979323
#define debug(x) cout<<"Case "<<x<<": "
#define For(i,n) for(long long i=0;i<n;i++)
#define Frabs(i,a,b) for(long long i = a; i < b; i++)
#define Frabr(i,a,b) for(long long i = a; i >=b; i--)
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long int           ll;
typedef long double             ld;
typedef unsigned long long int ull;
typedef vector <int>            vi;
typedef vector <ll>            vll;
typedef pair <int, int>        pii;
typedef pair <ll, ll>          pll;

bool visited[100];
ll x;
vector<pair<ll,ll> > arr[100];

void DepthFirstSearch(ll data,ll start,ll n)
{
    cout<<start<<" "<<data<<endl;;
    visited[start]=true;

    for(ll i=0;i<arr[start].size();i++)
    {
        if(!visited[arr[start][i].first])
        {
            DepthFirstSearch(arr[start][i].second,arr[start][i].first,n);
        }
    }
    return ;
}

int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<n+5;i++){
        visited[i]=(false);
    }
    for(ll i=0;i<m;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        arr[u].pb(mp(v,w));
    }
    ll start;
    cin>>start;
    ll x=-1;
    DepthFirstSearch(x,start,n);
    for(ll i=0;i<n;i++)
     {
         if(!visited[i])
             DepthFirstSearch(x,i,n);
     }

}
