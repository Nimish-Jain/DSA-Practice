//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

long long int maximizeSum(long long int a[], int n, int k)
{
	// Your code goes here
	sort(a, a + n);
	long long int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i]<0 and k>0) {
			a[i] = -a[i];
			k--;
		}
	}
	sum = accumulate(a, a + n, sum);

	int x = *min_element(a, a + n);
	if (k & 1) sum = sum - 2 * x;

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