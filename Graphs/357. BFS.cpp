//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<int>bfsOfGraph(int V, vector<int> adj[])
{
	// Code here
	int source = 0;
	vector<int> ans;
	queue<int> q;
	std::vector<bool> vis(V, 0);
	q.push(source);
	vis[source] = true;

	while (!q.empty()) {
		int f = q.front();
		ans.push_back(f);
		q.pop();

		//push nbrs if not visited
		for (auto nbr : adj[f]) {
			if (!vis[nbr]) {
				q.push(nbr);
				vis[nbr] = true;
			}
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