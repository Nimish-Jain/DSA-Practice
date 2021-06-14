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
	vector<vector<int> > adj(v);
	for (int i = 0; i <	v; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	vector<int> res(v, -1);
	vector<bool> available(v, false);

	res[0] = 0;
	int minColor = 0;

	for (int i = 1; i < v; i++) {
		for (auto nbr : adj[i]) {
			if (res[nbr] != -1) 	//nbr already colored with something
				available[res[nbr]] = true;	//true means occupied, hence can't be used
		}

		int color;
		for (color = 0; color < v; color++) {
			if (available[color] == false)
				break;	//finding first available color and store in color integer
		}

		res[i] = color;
		minColor = max(minColor, color + 1); //color was zero based indexing hence + 1

		for (auto nbr : adj[i]) {
			if (res[nbr] != -1)
				available[res[nbr]] = false; //reset
		}
	}

	cout << minColor << endl;

	return 0;
}