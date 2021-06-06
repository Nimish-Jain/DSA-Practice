//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool isCycle(int V, vector<int>adj[])
{
	vector<bool> visited(V, false);
	for (int i = 0; i < V; i++)
		if (!visited[i] && cycle(adj, i, -1, visited))
			return true;
	return false;
}

bool cycle(vector<int> adj[], int curr, int parent, vector<bool> &visited)
{
	visited[curr] = true;

	for (int nbr : adj[curr])
		if (!visited[nbr]) {
			if (cycle(adj, nbr, curr, visited))
				return true;
		}

		else if (nbr != parent)
			return true;

	return false;
}

// 	bool dfshelper(int node, vector<bool> &visited, int parent, vector<int> adj[]) {
// 		visited[node] = true;

// 		//make a call on all it's unvisited nbrs
// 		for (auto nbr : adj[node]) {
// 			if (!visited[nbr]) {
// 				if (dfshelper(nbr, visited, node, adj))
// 					return true;
// 			}
// 			else if (nbr != parent or nbr==node)
// 				return true;
// 		}
// 		return false;
// 	}

// 	bool isCycle(int V, vector<int> adj[]) {

// 		std::vector<bool> visited(V, false);
// 		for(int i=0; i<V; i++){
// 		    if(!visited[i] and dfshelper(i,visited,-1,adj))
// 		        return true;
// 		    return false;
// 		}

// 		//return dfshelper(0, visited, -1, adj);
// 	}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}