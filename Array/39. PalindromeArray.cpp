//Code :: Nimish Jain
#include<bits/stdc++.h>

using namespace std;

int PalinArray(int a[], int n)
{	//add code here.
	for (int i = 0; i < n; i++)
	{
		int ans = 0;
		int temp = a[i];
		while (temp > 0) {
			int rem = temp % 10;
			temp = temp / 10;

			ans = (ans * 10) + rem;
		}

		if (ans != a[i])
			return 0;

	}
	return 1;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) cin >> a[i];

		cout << PalinArray(a, n) << endl;

	}

	return 0;
}