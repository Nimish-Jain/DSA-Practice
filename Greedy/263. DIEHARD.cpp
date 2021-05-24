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
	int i, a, b, t, h, arm;
	int x; cin >> x;
	while (x--)
	{
		cin >> a >> b;
		if (a == 0 or b == 0) cout << "0" << endl;

		t = 1;
		h = a + 3;
		arm = b + 2;
		while (1) {
			if (h > 5 and arm > 10) {
				h -= 2;
				arm -= 8;
				t += 2;
			}
			else if (h > 20 and arm <= 10) {
				h -= 17;
				arm += 7;
				t += 2;
			}
			else {
				cout << t << endl;
				break;
			}
		}
	}

	return 0;
}