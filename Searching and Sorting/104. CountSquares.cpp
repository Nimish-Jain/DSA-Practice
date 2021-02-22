//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int countSquares(int N) {
	int ans = sqrt(N);
	if (ans * ans == N) return ans - 1;
	else return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << countSquares(n) << endl;

	return 0;
}