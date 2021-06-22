//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

typedef pair<int, pair<int, int> > p; //element, pair<idx curr, idx parent>
class Solution
{
public:
	//Function to merge k sorted arrays.
	vector<int> mergeKArrays(vector<vector<int>> arr, int K)
	{
		//code here
		vector<int> ans;
		priority_queue<p, vector<p>, greater<p> > pq; //minHeap
		//push first vector to heap
		for (int i = 0; i < K; i++)
			pq.push({arr[i][0], {0, i}});

		while (!pq.empty()) {
			auto node = pq.top();
			pq.pop();
			int ele = node.first;
			int currIdx = node.second.first;
			int parIdx = node.second.second;
			ans.push_back(ele);
			if (currIdx + 1 < K)
				pq.push({arr[parIdx][currIdx + 1] , {currIdx + 1, parIdx}});
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



	return 0;
}