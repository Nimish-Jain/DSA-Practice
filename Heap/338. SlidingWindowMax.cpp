//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
	vector<int> ans;
	priority_queue<pair<int, int>> pq;
	for (int i = 0; i < nums.size(); i++) {
		while (!pq.empty() and pq.top().second <= (i - k)) //Pop the max element if it is out of window
			pq.pop();
		pq.push({nums[i], i}); //push new right element to heap

		if (i >= k - 1)
			ans.push_back(pq.top().first);
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