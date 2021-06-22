//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

#define ll long long
class Solution
{
public:
	//Function to return the minimum cost of connecting the ropes.
	ll minCost(ll arr[], ll n) {
		// Your code here
		priority_queue<ll, vector<ll>, greater<ll> > pq;
		for (ll i = 0; i < n; i++)
			pq.push(arr[i]);

		ll cost = 0;
		while (pq.size() != 1) {
			ll s1 = pq.top();
			pq.pop();
			ll s2 = pq.top();
			pq.pop();
			cost += s1 + s2;
			pq.push(s1 + s2);
		}
		return cost;
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