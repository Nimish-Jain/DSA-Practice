//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
	//code here
	priority_queue<int> pq;
	for (int i = l; i <= r; i++) {
		pq.push(arr[i]);
		if (pq.size() > k)
			pq.pop();
	}
	return pq.top();
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}