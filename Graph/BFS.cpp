#include<bits/stdc++.h>
using namespace std;

//bool visited[1000];
//vector<int> adj[1000];

void bfs(int start, bool visited[], vector<int> adj[])
{
	queue<int> Q;
	Q.push(start);
	
	while(!Q.empty())
	{
		int current = Q.front();
		visited[current] = true;
		cout<<current;
		Q.pop();
		
		for(int i = 0; i < adj[current].size(); i++)
		{
			if(!visited[adj[current][i]])
			{
				Q.push(adj[current][i]);
				visited[adj[current][i]] = true; // Mark the pushed vertex as visited so that it is not printed multiple times
			}
		}
	}
}

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
		int V,E;
		int u,v;
		cout<<"Enter the number of vertices";
		cin>>V;
		
		bool visited[V];
		vector<int> adj[V];
		
		for(int i = 0; i < V; i++)
		{
			visited[i] = false;
		}
		
		
		
		
		cout<<"Please enter the number of edges";
		cin>>E;
		
		for(int i = 1; i <= E; i++)
		{
			cin>>u>>v;
			adj[u].push_back(v);
		}
		
		//~ for(int i = 0; i < V; i++)
		//~ {
			//~ cout<<"Adj list for "<<i<<" is :-\n";
			//~ for(int j = 0; j < adj[i].size(); j++)
			//~ {
				//~ cout<<adj[i][j]<" ";
			//~ }
		//~ }
		//~ 
		int start;
		cout<<"Please enter the starting vertex";
		cin>>start;
		bfs(start, visited, adj);
	}
	return 0;
}
	

