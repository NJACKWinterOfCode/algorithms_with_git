#include <bits/stdc++.h>

using namespace std;

vector <int> graph[1000 + 10];
int dis[1000 + 10];

void printArr(int dist[], int V)
{
    cout<<"Vertex   Distance from Source"<<endl;
    for (int i = 0; i < V; i++)
        cout<<i<<"\t\t"<<dis[i]<<endl;
}

void BellmanFord(int V, int E, int src)
{
    dis[src] = 0;

    for(int i = 0; i < V - 1; i++){
        int j = 0;
        while(graph[j].size() != 0){
            
            if(dis[graph[j][0]] + graph[j][2] < dis[graph[j][1]])
                dis[graph[j][1]] = dis[graph[j][0]] + graph[j][2];
            
            j++;
        }
    }
    
    for (int i = 0; i < E; i++)
    {
        int x = graph[i][0];
        int y = graph[i][1];
        int weight = graph[i][2];
        if (dis[x] != 2e9 && dis[x] + weight < dis[y])
            cout<<"Graph contains negative weight cycle"<<endl;
    }
    
    printArr(dis, V);
}

int main()
{
    int V;
    cout<<"Enter the number of vertices: ";
    cin>>V;
    int E;
    cout<<"Enter the number of edges: ";
    cin>>E;
    
    for(int i = 0; i < E + 2; i++){
        
        graph[i].clear();
        dis[i] = 2e9;
    }
    
    int u,v,w;
    for(int i=0;i<E;i++)
    {
        cout<<"Enter the starting vertex: ";
        cin>>u;
        graph[i].push_back(u);
        cout<<"Enter the ending vertex: ";
        cin>>v;
        graph[i].push_back(v);
        cout<<"Enter the weight of the vertex: ";
        cin>>w;
        graph[i].push_back(w);
    }
    
    BellmanFord(V,E,0);
    return 0;
}
