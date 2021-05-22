//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int zeros = 0, negative = 0;
	int prod = 1;
	int maxNegative = INT_MIN;

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			zeros++;
			continue; //don't include in answer, skip all the statements and exit the loop
		}

		if (a[i] < 0) {
			negative++;
			maxNegative = max(maxNegative, a[i]);
		}

		prod = prod * a[i];

	}

	if (zeros == n) {
		cout << 0;
		return 0;
	}

	else if (negative == 1 and zeros + negative == n) {
		cout << 0;
		return 0;
	}

	else if (negative % 2 != 0)
		prod = prod / maxNegative;

	cout << prod;

	return 0;
}