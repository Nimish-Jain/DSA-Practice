//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int a[4] = {3, 1, 7, 1};
	int n = 4;

	sort(a, a + n);
	int cnt = 0, s1 = 0;
	s1 = accumulate(a, a + n, s1);

	int s2 = 0;
	int i = n - 1;
	while (true) {
		s1 -= a[i];
		s2 += a[i];
		i--;
		cnt++;
		if (s2 > s1)
			break;
	}
	cout << cnt;

	return 0;
}
