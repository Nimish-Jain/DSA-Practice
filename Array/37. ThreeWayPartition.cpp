//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void partition(int arr[], int n, int a, int b)
{
	int l = 0;
	int r = n - 1;

	for (int i = 0; i <= r; i++)
	{
		if (arr[i] < a) {
			swap(arr[i], arr[l]);
			l++;
		}

		else if (arr[i] > b) {
			swap(arr[i], arr[r]);
			r--;
			i--;
		}
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];

	int a, b; cin >> a >> b;

	partition(arr, n, a, b);

	for (int i = 0; i < n; ++i) cout << arr[i] << " ";
	return 0;
}