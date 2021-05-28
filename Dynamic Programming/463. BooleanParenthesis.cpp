//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[205][205][2];

int solve(int i, int j, string S, int istrue) {

	//base conditions
	if (i > j)
		return dp[i][j][istrue] = 0;

	if (i == j) {
		if (istrue == 1)
			return dp[i][j][istrue] = (S[i] == 'T') ? 1 : 0;
		else
			return dp[i][j][istrue] = ( S[i] == 'F') ? 1 : 0;
	}

	//Lookup in 3D DP Array
	if (dp[i][j][istrue] != -1)
		return dp[i][j][istrue];

	//K loop
	int ans = 0;

	for (int k = i + 1; k <= j - 1; k += 2) {

		int lt = dp[i][k - 1][1];
		int lf = dp[i][k - 1][0];
		int rt = dp[k + 1][j][1];
		int rf = dp[k + 1][j][0];

		//Lookups to avoid extra recur calls
		if (lt == -1) {
			lt = solve(i, k - 1, S, 1);
			dp[i][k - 1][1] = lt;
		}
		if (lf == -1) {
			lf = solve(i, k - 1, S, 0);
			dp[i][k - 1][0] = lf;
		}
		if (rt == -1) {
			rt = solve(k + 1, j, S, 1);
			dp[k + 1][j][1] = rt;
		}
		if (rf == -1) {
			rf = solve(k + 1, j, S, 0);
			dp[k + 1][j][0] = rf;
		}

		if (S[k] == '|') {
			if (istrue == 1)
				ans += lt * rt + lt * rf + rt * lf ;
			else
				ans += lf * rf;
		}
		else if (S[k] == '&') {
			if (istrue == 1)
				ans += lt * rt;
			else
				ans += lt * rf + rt * lf + lf * rf;
		}
		else if (S[k] == '^') {
			if (istrue == 1)
				ans += lt * rf + rt * lf ;
			else
				ans += lt * rt + lf * rf;
		}

	}

	return dp[i][j][istrue] = ans % mod;
}

int countWays(int N, string S) {
	dp[N][N][2];
	memset(dp, -1, sizeof(dp));
	return solve(0, N - 1, S, 1) % mod;
}




//2ND APPROACH USING MAP ANS CORRECT MAP TLE AS EVEN UO_MAP USES LOG(N) TO FIND KEYS
// unordered_map <string, int> mp;

// int solve(string s, int i, int j, bool isTrue) {

// 	//base condition
// 	if (i == j) {
// 		if (isTrue)
// 			return s[i] == 'T' ? true : false;
// 		else
// 			return s[i] == 'F' ? true : false;
// 	}

// 	//Prepare key for storing in map
// 	string temp = "";
// 	temp.append(to_string(i));
// 	temp.push_back(' ');
// 	temp.append(to_string(j));
// 	temp.push_back(' ');
// 	temp.append(to_string(isTrue));

// 	//Lookup in Map
// 	if (mp.find(temp) != mp.end())
// 		return mp[temp];

// 	//k loop
// 	int ans = 0;

// 	for (int k = i + 1; k <= j - 1; k=k+2) {
// 		int lt = solve(s, i, k - 1, true);
// 		int lf = solve(s, i, k - 1, false);
// 		int rt = solve(s, j, k + 1, true);
// 		int rf = solve(s, j, k + 1, false);

// 		if (s[k] == '&') {
// 			if (isTrue == true)
// 				ans += (lt * rt);
// 			else
// 				ans += (lt * rf) + (lf * rt) + (rf * lf);
// 		}
// 		else if (s[k] == '|') {
// 			if (isTrue == true)
// 				ans += (lt * rf) + (lf * rt) + (rt * lt);
// 			else
// 				ans += (lf * rf);
// 		}
// 		else if (s[k] == '^') {
// 			if (isTrue == true)
// 				ans += (lt * rf) + (rt * lf);
// 			else
// 				ans += (lf * rf) + (rt * lt);
// 		}
// 	}

// 	return mp[temp] = ans;
// }

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}