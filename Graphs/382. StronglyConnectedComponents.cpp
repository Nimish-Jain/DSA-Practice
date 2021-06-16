//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<int> order;

void dfs(int src, vector<int> &visited, vector<int> adj[]) {
	visited[src] = 1;
	for (auto nbr : adj[src]) {
		if (!visited[nbr])
			dfs(nbr, visited, adj);
	}
	order.push_back(src); //push while returning from stack frame
}

void rdfs(int src, vector<int> &visited, vector<int> adj[]) {
	visited[src] = 1;
	for (auto nbr : adj[src]) {
		if (!visited[nbr])
			rdfs(nbr, visited, adj);
	}
}

int kosaraju(int V, vector<int> adj[])
{
	//code here
	order.clear();
	vector<int> revAdj[V]; //reverse Graph
	for (int i = 0; i < V; i++) {
		for (auto nbr : adj[i])
			revAdj[nbr].push_back(i);
	}

	vector<int> visited(V, 0);
	for (int i = 0; i < V; i++) {
		if (!visited[i])
			dfs(i, visited, adj); //dfs in i/p graph
	}

	vector<int> revVis(V, 0);
	int cnt = 0;
	for (int i = V - 1; i >= 0; i--) {
		if (!revVis[order[i]]) {
			rdfs(order[i], revVis, revAdj);
			cnt++;
		}
	}

	return cnt;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}