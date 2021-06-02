//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

unordered_map <string, int> dp;

int solve(string str, vector<string> &b) {

	int n = str.length();

	//base case
	if (n == 0)
		return 1; //empty string returns 1

	//Lookup
	if (dp[str] != 0)
		return dp[str];

	for (int i = 1; i <= n; i++) { //looping over all the substrings
		int f = 0; //for finding substrings in dict
		string ss = str.substr(0, i);
		for (int j = 0; j < b.size(); j++) { //searching ss substring in B Dictionary
			if (ss.compare(b[j]) == 0) {
				f = 1;
				break;
			}
		}
		//flag f will be 1 if ss is found in dict
		//then we check remaining string in dict, if that is also true, ans is true.
		if (f == 1 and solve(str.substr(i, n - i), b) == 1)
			return dp[str] = 1;
	}
	return dp[str] = -1;
}

int wordBreak(string A, vector<string> &B) {
	//code here
	int ans = solve(A, B);
	if (ans == 1) return 1;
	else return 0;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}