//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int inSequence(int a, int b, int c)
{
	if (c == 0) {
		if (a == b) return 1;
		else return 0;
	}
	else {
		if ((b - a) / c < 0) return 0;
		else {
			if ((b - a) % c == 0) return 1;
			else return 0;
		}
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}