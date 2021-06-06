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

	void printAdjList() {
		//iterate through all rows
		for (int i = 0; i < V; i++) {
			cout << i << "--> ";
			for (auto node : l[i]) {
				cout << node << " ";
			}
			cout << endl;
		}
	}
};

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	Graph g(6);
	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 1);
	g.addEdge(3, 4);
	g.addEdge(4, 5);
	g.addEdge(2, 3);
	g.addEdge(3, 5);

	g.printAdjList();
	//2. Vector of vectors way
	// int v, e;
	// cin >> v >> e;

	// vector<int> graph[v + 1];
	// for (int i = 0; i < e; i++) {
	// 	int x, y;
	// 	cin >> x >> y;
	// 	graph[x].push_back(y);
	// 	graph[y].push_back(x);
	// }

	// for (int i = 1; i <= v; i++) {
	// 	cout << i << "--> ";
	// 	for (int j = 0; j < graph[i].size(); j++)
	// 		cout << graph[i][j] << " ";
	// 	cout << endl;
	// }


	return 0;
}