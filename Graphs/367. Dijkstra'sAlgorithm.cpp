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

	int dijkstra(int src, int dest) {

		//define data structures required
		std::vector<int> dist(V, INT_MAX);
		set<pair<int, int> > s;

		//INIT
		dist[src] = 0;
		s.insert({0, src});

		while (!s.empty()) {
			auto it = s.begin();
			int node = it->second;
			int distTillNow = it->first;

			s.erase(it); //pop operation

			//Iterate over all nbrs of node i.e adj list given
			for (auto nbrPair : l[node]) {
				//adj list has value stored as {weight, node}
				int nbr = nbrPair.second;
				int currEdge = nbrPair.first;

				if ((distTillNow + currEdge) < dist[nbr]) {

					//we want to update the value of set but set has no update operation
					//hence we delete and then inset which is = update operation

					//remove if already exist in set
					if (s.find({dist[nbr], node}) != s.end()) {
						s.erase({dist[nbr], node});
					}

					dist[nbr] = distTillNow + currEdge; //update least distance
					s.insert({dist[nbr], node}); //push to set
				}
			}
		}
		return dist[dest];
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