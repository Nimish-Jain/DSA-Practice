//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

	vector<vector<int>> g(numCourses, vector<int> ());
	vector<int> inDeg(numCourses, 0);
	queue<int> q;

	for (int i = 0 ; i < prerequisites.size() ; i++) {
		int a = prerequisites[i][0];
		int b = prerequisites[i][1];
		g[a].push_back(b);
		inDeg[b]++;
	}

	for (int i = 0 ; i < inDeg.size() ; i++) {
		if (inDeg[i] == 0)
			q.push(i);
	}
	int c = 0;

	while (!q.empty()) {
		int t = q.front();
		q.pop();
		c++;
		for (auto i : g[t]) {
			inDeg[i]--;
			if (inDeg[i] == 0) {
				q.push(i);
			}
		}
	}

	if (c == numCourses)
		return true;
	return false;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}