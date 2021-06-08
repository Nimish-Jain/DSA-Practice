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
		adj = new list<int>[V]; //of V size
	}

	void addEdge(int i, int j, bool undir = true) {
		adj[i].push_back(j);
	}

	bool dfshelper(int node, vector<bool> &visited, std::vector<bool> &stack, vector<int> adj[]) {

		visited[node] = true;
		stack[node] = true;

		for (auto nbr : adj[node]) {
			if (stack[nbr])
				return true;
			else if (visited[nbr] == false) {
				bool nbrFoundCycle = dfshelper(nbr, visited, stack, adj);
				if (nbrFoundCycle)
					return true;
			}
		}

		stack [node] = false;
		return false;
	}

	bool isCyclic(int V, vector<int> adj[]) {
		std::vector<bool> stack(V, false);
		std::vector<bool> visited(V, false);

		for (int i = 0; i < V; i++) {
			int source = i;
			if (!visited[source]) {
				if (dfshelper(source, visited, stack, adj))
					return true;
			}
		}
	}

};

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	Graph g(3);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 0);

	g.isCycle();

	return 0;
}