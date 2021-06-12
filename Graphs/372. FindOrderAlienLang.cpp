//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void dfs(int src, vector<vector<int>> &adj, vector<int> &visited, string &ans) {
	visited[src] = 1;
	for (auto nbr : adj[src]) {
		if (!visited[nbr]) {
			dfs(nbr, adj, visited, ans);
		}
	}
	char ch = src + 'a';
	ans = ch + ans;
}

string findOrder(string dict[], int n, int k) {
	//code here
	vector<vector<int>> adj(k);
	for (int i = 0; i < n - 1; i++) {
		string one = dict[i];
		string two = dict[i + 1];

		for (int j = 0; j < min(one.length(), two.length()); j++) {
			if (one[j] != two[j]) {
				adj[one[j] - 'a'].push_back(two[j] - 'a'); //-'a' for storing 0 based indexing
				break;
			}
		}
	}

	vector<int> visited(k, 0);
	string ans = "";
	for (int i = 0; i < k; i++) {
		if (!visited[i])
			dfs(i, adj, visited, ans);
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