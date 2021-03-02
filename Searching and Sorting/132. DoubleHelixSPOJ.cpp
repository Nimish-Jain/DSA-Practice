//Code :: Nimish Jain
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	FIO;

	while (true)
	{
		int n; cin >> n;
		if (n == 0) break;
		else {
			int a[n];
			for (int i = 0; i < n; ++i) cin >> a[i];
			int m; cin >> m;
			int b[m];
			for (int i = 0; i < m; ++i) cin >> b[i];

			int s1 = 0, s2 = 0;
			int i = 0, j = 0;
			int ma = 0;

			while (i < n and j < m)
			{
				if (a[i] < b[j]) s1 += a[i++];
				else if (b[j] < a[i]) s2 += b[j++];
				else {
					ma = ma + a[i] + max(s1, s2);
					s1 = s2 = 0;
					i++;
					j++;
				}
			}
			while (i < n) {
				s1 += a[i++];
			}
			while (j < m) {
				s2 += b[j++];
			}
			ma = ma + max(s1, s2);
			cout << ma << endl;
		}
	}
	return 0;
}