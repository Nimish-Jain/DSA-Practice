//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int kthElement(int a[], int b[], int m, int n, int k)
{
	int x = 0, i = 0, j = 0;
	while (i < m and j < n)
	{
		if (a[i] < b[j]) {
			x++;
			if (x == k) return a[i];
			i++;
		}
		else {
			x++;
			if (x == k) return b[j];
			j++;
		}
	}
	while (i < m)
	{
		x++;
		if (x == k) return a[i];
		i++;
	}

	while (j < n)
	{
		x++;
		if (x == k) return b[j];
		j++;
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}