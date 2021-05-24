//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool comp(vector<int> a, vector<int> b) {
	if (a[1] == b[1]) {         	//check if arrival time is same
		if (a[2] == b[2])			//check if burst time is also same
			return a[0] < b[0];
		else
			return a[2] < b[2];
	}
	return a[1] < b[1];				//otherwise sort acc. to arrival time
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector<vector<int>> v(n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 3; j++) {
			int x; cin >> x;
			v[i].push_back(x);
		}
	}
	sort(v.begin(), v.end(), comp);

	vector<int> ans;
	priority_queue <vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
	pq.push({v[0][2], v[0][1], v[0][0]}); //min heap of burst times

	int i = 1;
	int curr_time = 0;

	while (!pq.empty()) {
		int burst_time = pq.top()[0];
		int id = pq.top()[2];
		pq.pop();

		ans.push_back(id);
		curr_time += burst_time;

		while (true) {
			if (i < n and v[i][1] <= curr_time) {
				pq.push({v[i][2], v[i][1], v[i][0]});
				i++;
			}
			else
				break;
		}
	}

	for (auto x : ans)
		cout << x << " ";

	return 0;
}