//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool wordBreak(string s, vector<string>& wordDict) {

	int n = s.length();
	int dp[n + 1];
	memset(dp, 0, sizeof(dp));
	dp[n] = 1;

	unordered_set<string> dict;
	for (string& word : wordDict)
		dict.insert(word);

	for (int i = n - 1; i >= 0; i--)
	{
		string word = "";
		for (int j = i; j < n; j++)
		{
			word.push_back(s[j]);
			if (dict.find(word) != dict.end()) //word is found
			{
				if (dp[j + 1])
					dp[i] = 1;
			}
		}
	}
	return dp[0];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s = "catsandog";
	vector<string> wordDict({"cats", "dog", "sand", "and", "cat"});

	cout << wordBreak(s, wordDict);

	return 0;
}