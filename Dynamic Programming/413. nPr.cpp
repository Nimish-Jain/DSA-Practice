//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int nPr(int n, int r) {
	int p = 1;
	for (int i = 0; i < r; i++)
		p = p * (n - i);
	return p;
}

// O(n) O(n space) -> 1st Approach
// int nPr(int n, int r) {
// 	int fact[n + 1];
// 	fact[0] = 1;
// 	for (int i = 1; i < n + 1; i++)
// 		fact[i] = fact[i - 1] * i;
// 	return (fact[n] / fact[n - r]);
// }

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}