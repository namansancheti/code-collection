#include<bits/stdc++.h>
using namespace std;

#define V 9

void printSolution(int dist[])
{
	cout<<"The shortest distance to each vertex from the source vertex"<<0<<" is \n";
	for(int i = 0; i < V; i++)
	{
		cout<<dist[i]<<" ";
	}
}

int minDistanceVertex(int dist[], bool sptSet[])
{
	int min_index;
	int min_dist = INT_MAX;
	for(int i = 0; i < V; i++)
	{
		if(!sptSet[i] && dist[i] < min_dist)
		{
			min_dist = dist[i];
			min_index = i;
		}
	}
	return min_index;
}

void dijkstra(int graph[V][V], int source)
{
	bool sptSet[V]; // Indicates whether the ith vertex is included in the Shortest Path Set or not ; When the vertex is included in the sptSet then its minimum distance from source has been calculated and finalized
	int dist[V]; // Indicates the shortest distance to the ith vertex from the source vertex
	
	for(int i = 0; i < V; i++)
	{
		sptSet[i] = false;
		dist[i] = INT_MAX;
	}
	
	dist[source] = 0;
	
	for(int i = 0; i < V; i++) 
	{
		int u = minDistanceVertex(dist, sptSet); // u is the vertex which hasn't been included in sptSet yet and is at the shortest distance from the source
	    sptSet[u] = true;
	    
	    for(int j = 0; j < V; j++)
	    {
			if(!sptSet[j] && graph[u][j] && dist[u] != INT_MAX && dist[u] + graph[u][j] < dist[j])
				dist[j] = dist[u] + graph[u][j];
		}
	}
	
	printSolution(dist);
	
}

int main()
{
	int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
	dijkstra(graph, 0);
	
	return 0;
}
