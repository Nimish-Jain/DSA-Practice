//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int v, e; cin >> v >> e;
	std::vector<int> graph[v + 1]; //array of vectors
	vector<int> indegree(v + 1, 0);

	for (int i = 0; i < e; i++) {
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y);
		indegree[y]++;
	}
	std::vector<int> ans(v + 1, 0);
	queue<int> q;

	for (int i = 1; i <= v; i++) {
		if (indegree[i] == 0) {
			q.push(i);
			ans[i] = 1;
		}
	}

	while (!q.empty()) {
		int f = q.front();
		q.pop();
		for (auto nbr : graph[f]) {
			indegree[nbr]--;
			if (indegree[nbr] == 0) {
				q.push(nbr);
				ans[nbr] = ans[f] + 1;
			}
		}
	}

	for (int i = 1; i <= v; i++)
		cout << ans[i] << " ";

	return 0;
}