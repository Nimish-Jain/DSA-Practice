//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class Graph {
	int V;
	list<int> *l;
public:

	Graph(int vertices) {
		V = vertices;
		l = new list<int>[V]; //of V size
	}

	void addEdge(int i, int j, bool undir = true) {
		l[i].push_back(j);
		if (undir == true)
			l[j].push_back(i);
	}

	void dfshelper(int node, vector<bool> &visited) {
		visited[node] = true;
		cout << node << " ";

		//make a call on all it's unvisited nbrs
		for (int nbr : l[node]) {
			if (!visited[nbr]) {
				dfshelper(nbr, visited);
			}
		}
		return;
	}

	void dfs(int source) {
		vector<bool> visited(V, 0);
		dfshelper(source, visited);
	}

};

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	Graph g(8);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 5);
	g.addEdge(5, 6);
	g.addEdge(4, 5);
	g.addEdge(0, 4);
	g.addEdge(3, 4);

	g.dfs(1);

	return 0;
}