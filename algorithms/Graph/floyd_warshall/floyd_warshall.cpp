/*
 * Program to find the shortest path between all pairs of vertices in a 
 * directed graph using the Floyd-Warshall algorithm.
*/

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

const int inf = 1e9;
int** floyd_warshall(int **g, int n);

int main()
{
	int n;
	// Number of vertices in the graph.
	cin >> n;
	int m;
	// Number of edges.
	cin >> m;

	int **g = new int*[n];
	for (int i = 0; i < n; i++)
	{
		g[i] = new int[n];
		memset(g[i], 0, n*sizeof(int));
	}

	// Adjacency matrix representation of the graph.
	for (int i = 0; i < n; i++)
	{
		int u, v, w;
		// u, v are the end-points of the edge, 0-indexed.
		// w is the weight of the edge.
		// 0 <= u, v < n; w != 0
		cin >> u >> v >> w;
		g[u][v] = w;
	}

	// Storing distance matrix in "dist".
	int **dist = floyd_warshall(g, n);

	// Printing distance matrix.
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(5) << dist[i][j];
		cout << "\n";
	}

	return 0;
}

int** floyd_warshall(int **g, int n)
{
	int **dist = new int*[n];
	for (int i = 0; i < n; i++)
	{
		dist[i] = new int[n];
		memset(dist[i], 0, n*sizeof(int));
	}

	// Initialising distance matrix.
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			dist[i][j] = inf;
			if (g[i][j])
				dist[i][j] = g[i][j];
		}
		dist[i][i] = 0;
	}

	// Finding shortest paths.
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (dist[i][j] > dist[i][k] + dist[k][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	return dist;
}