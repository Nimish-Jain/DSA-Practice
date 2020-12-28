//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;


int maxProfit(vector<int>& prices) {
	int currPrice = INT_MAX;
	int profit = 0;

	for (int i = 0; i < prices.size(); i++)
	{
		if (prices[i] < currPrice)
			currPrice = prices[i];
		else if ( prices[i] - currPrice > profit ) {
			profit = prices[i] - currPrice;
		}
	}

	return profit;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}