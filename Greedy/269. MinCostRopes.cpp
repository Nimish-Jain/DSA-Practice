//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

long long minCost(long long a[], long long n) {
	// Your code here
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	for (long long i = 0; i < n; i++)
		pq.push(a[i]);
	long long ans = 0;
	while (pq.size() > 1) {
		long long a = pq.top();
		pq.pop();
		long long b = pq.top();
		pq.pop();

		ans = ans + a + b;
		pq.push(a + b);
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