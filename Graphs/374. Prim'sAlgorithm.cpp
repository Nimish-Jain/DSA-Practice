//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class Graph {
	int V;
	vector<pair<int, int> > *l;
public:
	Graph(int V) {
		this->V = V;
		l = new vector<pair<int, int> > [V];
	}

	void addEdge(int x, int y, int w) {
		l[x].push_back({y, w});
		l[y].push_back({x, w});
	}

	int primsMST() {
		priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int>> > pq;
		vector<bool> visited(V, 0);
		int ans = 0;

		pq.push({0, 0}); //{wt, node}
		while (!pq.empty()) {
			//take edge with min weight
			auto best = pq.top();
			pq.pop();

			int to = best.second;
			int weight = best.first;

			if (visited[to])
				continue;

			//otherwise take the current edge into MST
			ans += weight;
			visited[to] = 1;

			//add new edges of to edge to the queue
			for (auto x : l[to]) {
				if (visited[x.first] == 0)
					pq.push({x.second, x.first});
			}
		}
		return ans;
	}

};

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int V, E; cin >> V >> E;
	Graph g(V);
	for (int i = 0; i < E; i++) {
		int x, y, w;
		cin >> x >> y >> w;
		g.addEdge(x, y, w);
	}

	cout << g.primsMST() << endl;

	return 0;
}