//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int merge(int a[], int temp[], int left, int mid, int right)
{
	int i, j, k, cnt = 0;
	i = left;
	j = mid;
	k = left;

	while ((i <= mid - 1) && (j <= right))
	{
		if (a[i] <= a[j])
			temp[k++] = a[i++];
		else {
			temp[k++] = a[j++];
			cnt += mid - i;
		}
	}

	while (i <= mid - 1)
		temp[k++] = a[i++];

	while (j <= right)
		temp[k++] = a[j++];

	for (int m = left; m <= right; m++)
		a[m] = temp[m];

	return cnt;
}

int countInv(int a[], int temp[], int left, int right)
{
	int cnt = 0;
	if (left < right)
	{
		int mid = (left + right) / 2;

		cnt += countInv(a, temp, left, mid);
		cnt += countInv(a, temp, mid + 1, right);
		cnt += merge(a, temp, left, mid + 1, right);
	}
	return cnt;
}

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

	int temp[n];
	cout << countInv(a, temp, 0, n - 1);

	return 0;
}