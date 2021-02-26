//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int search(int arr, int n, int x, int k)
{
	int i = 0;
	while (i < n)
	{
		if (arr[i] == n)
			return i;
		i += max(1, abs(arr[i] - x) / k);
	}
	return -1;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int arr[] = {5, 6, 7, 9, 11, 10};
	int size = 6;
	cout << search(arr, size, 11, 2);

	return 0;
}