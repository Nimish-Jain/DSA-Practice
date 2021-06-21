//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<int> kLargest(int arr[], int n, int k) {
	// code here
	//MinHeap
	priority_queue<int, vector<int>, greater<int> > pq;
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		pq.push(arr[i]);
		if (pq.size() > k)
			pq.pop();
	}
	while (pq.size() > 0) {
		ans.push_back(pq.top());
		pq.pop();
	}
	sort(ans.begin(), ans.end(), greater<int>());
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