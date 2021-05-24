//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int Maximize(int a[], int n)
{
	// Complete the function
	sort(a, a + n);
	int ans = 0, mod = 1e9 + 7;
	for (int i = 0; i < n; i++) {
		// ans += int((a[i]*i)%mod);
		ans = (ans + ((unsigned long long)a[i] * i) % mod ) % mod;
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