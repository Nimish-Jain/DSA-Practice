//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int t[201][201];

int solve(int e, int f) {

	//base conditions
	if (f == 0 || f == 1)
		return f;

	if (e == 1)
		return f;

	//Lookup
	if (t[e][f] != -1)
		return t[e][f];

	//K loop
	int mn = INT_MAX;
	for (int k = 1; k <= f; k++) {

		int low, high;

		if (t[e - 1][k - 1] != -1)
			low = t[e - 1][k - 1];
		else
			low = solve(e - 1, k - 1);
		t[e - 1][k - 1] = low;

		if (t[e][f - k] != -1)
			high = t[e][f - k];
		else
			high = solve(e , f - k);
		t[e][f - k] = high;

		int temp = 1 + max(low, high);

		mn = min(mn , temp);
	}
	return t[e][f] = mn;
}

int eggDrop(int e, int f) {
	memset(t, -1, sizeof(t));
	return solve(e , f);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}