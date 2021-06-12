//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<int> topoSort(int V, vector<int> adj[])
{
	// code here
	vector<int> ans;
	vector<int> indegree(V, 0);
	queue<int> q;

	//fill indegree using adj list
	for (int i = 0; i < V; i++) {
		for (auto nbr : adj[i])
			indegree[nbr]++;
	}

	for (int i = 0; i < V; i++) {
		if (indegree[i] == 0)
			q.push(i);
	}

	while (!q.empty()) {
		int f = q.front();
		q.pop();
		ans.push_back(f);
		for (auto nbr : adj[f]) {
			indegree[nbr]--;
			if (indegree[nbr] == 0)
				q.push(nbr);
		}
	}

	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}