//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

string smallestNumber(int S, int D) {
	if (S > 9 * D)
		return "-1";

	string str = "";
	S -= 1;

	for (int i = 0; i < D - 1; i++) {
		if (S > 9) {
			str += to_string(9);
			S -= 9;
		}
		else {
			str += to_string(S);
			S = 0;
		}
	}
	str += to_string(S + 1);
	reverse(str.begin(), str.end());
	return str;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}