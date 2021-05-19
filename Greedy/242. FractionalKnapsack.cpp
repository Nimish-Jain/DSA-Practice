//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

double fractionalKnapsack(int W, Item arr[], int n)
{
	// Your code here
	vector<pair<double, int>> v;
	for (int i = 0; i < n; i++) {
		double x = (arr[i].value * 1.0) / (arr[i].weight * 1.0);
		v.push_back(make_pair(x, i));
	}

	sort(v.begin(), v.end(), greater<pair<double, int>>());
	int sumOfWeights = 0; //keep adding weights
	double ans = 0; //keep adding values, return ans.

	for (int i = 0; i < v.size(); i++) {
		if (sumOfWeights + arr[v[i].second].weight < W) {
			ans += arr[v[i].second].value;
			sumOfWeights += arr[v[i].second].weight;
		}
		else { //for fraction
			double x = (W - sumOfWeights) * 1.0;
			ans += (x * v[i].first);
			break;
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