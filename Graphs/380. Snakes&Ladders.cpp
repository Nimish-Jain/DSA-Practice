//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int minThrow(int N, int arr[]) {
	// code here
	vector<bool>visited(31, false);
	queue<pair<int, int>>q;
	q.push({1, 0});

	visited[1] = true;
	int ans = -1;

	while (!q.empty()) {
		pair<int, int>curr = q.front();
		q.pop();

		if (curr.first == 30) {
			ans = curr.second;
			return ans;
		}

		for (int i = curr.first + 1; i <= curr.first + 6 && i <= 30; i++) {

			int p = i;
			for (int j = 0; j < 2 * N; j++) {
				if (p == arr[2 * j] && !visited[p])
					p = arr[2 * j + 1];
			}

			if (!visited[p])
				q.push({p, curr.second + 1});

			visited[p] = true;
		}
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