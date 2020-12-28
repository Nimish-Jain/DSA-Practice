//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void reverse(int *arr, int i, int j)
{
	while (i <= j)
	{
		swap(arr[i], arr[j]);
		i++;
		j--;
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
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	reverse(arr, 0, n - 2);

	reverse(arr, 0, n - 1);

	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}