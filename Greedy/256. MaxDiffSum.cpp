//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

long long int maxSum(int a[], int n)
{
	sort(a, a + n);
	int i = 0, j = n - 1;
	long long int sum = 0;
	int cnt = 0;
	while (i < j) {
		sum += abs(a[i] - a[j]);
		if (cnt % 2 == 0)
			i++;
		else
			j--;
		cnt++;
	}
	sum += abs(a[j] - a[0]);
	return sum;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}