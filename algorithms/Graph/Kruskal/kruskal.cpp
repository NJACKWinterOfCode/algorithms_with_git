#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MAX = 1e4 + 5;
ll parent[MAX], ranks[MAX], vertex, edges;
pair <ll, pair<ll, ll> >graph[MAX];

void initialize()
{
    for(ll i = 0;i < MAX;++i)
    {
        parent[i] = i;
        ranks[i] = 0;
    }
}

ll find(ll x)
{
    while(parent[x] != x)
    {
        parent[x] = parent[parent[x]];
        x = parent[x];
    }
    return x;
}

void Union(ll x, ll y)
{
    ll p = find(x);
    ll q = find(y);
    if (ranks[p] < ranks[q])
        parent[p] = parent[q];
    else if (ranks[p] > ranks[q])
        parent[q] = parent[p];
    else
    {
        parent[p] = parent[q];
        ranks[q]++;
    }
}

ll kruskal(pair<ll, pair<ll, ll> >graph[])
{
    ll x, y, e=0, i=0;
    ll cost, minWeight = 0;
    pair<ll, pair<ll, ll> >result[vertex];
    pair<ll, pair<ll, ll> >next;
    while(e < vertex-1)
    {
        next = graph[i++];
        x = next.second.first;
        y = next.second.second;
        cost = next.first;
        
        if(find(x) != find(y))
        {
            result[e++] = next;
            minWeight += cost;
            Union(x, y);
        }
    }
    
    cout<< "The edges in the spanning tree: "<<endl;
    for (i = 0; i < e; ++i)
        cout<<result[i].second.second<<" -- "<<result[i].second.first<<" == "<<result[i].first<<endl;
    
    return minWeight;
}

int main()
{
    ll x, y;
    ll weight, minWeight;
    
    initialize();
    
    cout<<"Enter the number of vertices: ";
    cin >> vertex;
    cout<<"Enter the number of edges: ";
    cin >> edges;
    for(int i=0;i<edges;i++)
    {
        cin >> x >> y >> weight;
        graph[i] = make_pair(weight, make_pair(x, y));
    }
    
    sort(graph, graph+edges);
    
    minWeight = kruskal(graph);
    
    cout << "The weight of the spanning tree = " << minWeight << endl;
    return 0;
}
