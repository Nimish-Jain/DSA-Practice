//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<int> candyStore(int candies[], int n, int k)
{
	// Write Your Code here
	sort(candies, candies + n);
	int minc = 0, maxc = 0;

	int size = n;
	for (int i = 0; i < size; i++) {
		minc += candies[i];
		size = size - k;
	}
	size = 0;
	for (int i = n - 1; i >= size; i--) {
		maxc += candies[i];
		size = size + k;
	}
	return {minc , maxc};
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}