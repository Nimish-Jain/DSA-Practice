//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool func(int *a, int n, int mid, int m)
{
	int sum = 0;
	int stu = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > mid) return false;
		if (sum + a[i] > mid) {
			stu++;
			sum = a[i];
			if (stu > m) return false;
		}
		else sum += a[i];
	}
	return true;
}

int findPages(int a[], int n, int m)
{
	int lb = 0;
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)    sum += a[i];
	int ub = sum;
	while (lb <= ub)
	{
		int mid = lb + (ub - lb) / 2;
		if (func(a, n, mid, m))
		{
			ans = mid;
			ub = mid - 1;
		}
		else
			lb = mid + 1;
	}
	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}