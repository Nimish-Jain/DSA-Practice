//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

// Kruskal's Algo
//1. Sort edges based on given weights
//2. Pick an edge, Add weight to ans if it does not form a cycle

//Implement
//Use Disjoint Set Union Data structure

class DSU {
	int *parent;
	int *rank;
public:
	DSU(int n) {
		parent = new int[n];
		rank = new int[n];

		//parent -1, rank/size = 1
		for (int i = 0; i < n; i++) {
			parent[i] = -1;
			rank[i] = 1;
		}
	}

	//Find Function
	int find(int i) {
		//base case
		if (parent[i] == -1)
			return i;
		//otherwise
		return parent[i] = find(parent[i]);
	}

	//Union/Unite Function
	void unite(int x, int y) {
		int s1 = find(x);
		int s2 = find(y);
		if (s1 != s2) { //belongs to diff sets then only unite
			//union by rank
			if (rank[s1] < rank[s2]) {
				parent[s1] = s2;
				rank[s2] += rank[s1];
			}
			else {
				parent[s2] = s1;
				rank[s1] += rank[s2];
			}
		}
	}
};

//Take edgelist{triplets of (src,dest,weight)} instead of Adjacency list
class Graph {
	vector<vector<int> > edgeList;
	int V;
public:

	Graph(int V) {
		this->V = V;
	}

	void addEdge(int x, int y, int w) {
		edgeList.push_back({w, x, y});
	}

	int kruskal_mst() {
		//1. sort edges based on weight
		sort(edgeList.begin(), edgeList.end());
		int ans = 0;

		DSU s(V);

		for (auto edge : edgeList) {
			int w = edge[0];
			int x = edge[1];
			int y = edge[2];

			//2. Take that edge in MST if it does not form a cycle
			if (s.find(x) != s.find(y)) {
				s.unite(x, y);
				ans += w;
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

	// Graph g(4);
	// g.addEdge(0, 1, 1);
	// g.addEdge(1, 3, 3);
	// g.addEdge(3, 2, 4);
	// g.addEdge(2, 0, 2);
	// g.addEdge(0, 3, 2);
	// g.addEdge(1, 2, 2);

	int V, E; cin >> V >> E;
	Graph g(V);
	for (int i = 0; i < E; i++) {
		int x, y, w;
		cin >> x >> y >> w;
		g.addEdge(x - 1, y - 1, w);
	}

	cout << g.kruskal_mst() << endl;

	return 0;
}