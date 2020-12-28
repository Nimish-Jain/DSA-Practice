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

	int n; cin >> n;
	int a[50] = { -1};  //Use 3000 size in GFG for acceptance
	int end = 0; int carry = 0;
	a[0] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= end; j++)
		{
			int mul = a[j] * i + carry;
			a[j] = mul % 10;
			carry = mul / 10;
		}

		while (carry != 0)
		{
			a[++end] = carry % 10;
			carry = carry / 10;
		}
	}

	for (int i = end; i >= 0; i--)
		cout << a[i];

	return 0;
}