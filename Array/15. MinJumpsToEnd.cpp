//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int minJumps(int arr[], int n) {
	// Your code here
	if (n == 1) return 0;
	else if (arr[0] == 0) return -1;
	int jump = 1;
	int maxR = arr[0];
	int step = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (i == n - 1)
			return jump;

		maxR = max(maxR, i + arr[i]);
		cout << maxR << endl;
		step--;
		if (step == 0)
		{
			jump++;
			if (i >= maxR)
				return -1;

			step = maxR - i;
		}
	}
	return jump;
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
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		cout << minJumps(arr, n) << endl;
		// int cnt = 0;
		// int ladder = arr[0];
		// int stairs = arr[0];
		// for (int i = 0; i < n; ++i)
		// {
		// 	if (i == n - 1) {
		// 		break;
		// 	}
		// 	if (i + arr[i] > ladder)
		// 		ladder = i + arr[i];
		// 	stairs--;
		// 	if (stairs == 0)
		// 	{
		// 		cnt++;
		// 		stairs = ladder - i;
		// 	}
		// }
		// cout << cnt << endl;
	}

	return 0;
}