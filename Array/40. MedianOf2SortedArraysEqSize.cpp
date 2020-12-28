//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int find_median(int a[], int b[], int sa, int ea, int sb, int eb)
{
	int n = ea + 1;
	if (n <= 0)
		return -1;

	if (n == 1)
		return (a[0] + b[0]) / 2;

	//if(n==2) base case 1
	if (ea - sa == 1 or eb - sb == 1)
		return (max(a[sa], b[sb]) + min(a[ea], b[eb])) / 2;

	int m1_index = (sa + ea) / 2;
	int m2_index = (sb + eb) / 2;

	int m1 = a[m1_index];
	int m2 = b[m2_index];

	//Medians are equal base case 2
	if (m1 == m2)
		return m1;

	if (m1 < m2)
	{
		sa = m1_index;
		eb = m2_index;
	}
	else if (m2 < m1)
	{
		sb = m2_index;
		ea = m1_index;
	}
	return find_median(a, b, sa, ea, sb, eb);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int a[] = {1, 2, 5, 11, 15};
	int b[] = {3, 4, 13, 17, 18};

	int n = 5;
	cout << find_median(a, b, 0, n - 1, 0, n - 1);

	return 0;
}