//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void printPermutations(string ques, string asf)
{
	if (ques.length() == 0) {
		cout << asf << " ";
		return;
	}
	for (int i = 0; i < ques.length(); i++)
	{
		char ch = ques.at(i);
		string left = ques.substr(0, i);
		string right = ques.substr(i + 1);
		string roq = left + right;
		printPermutations(roq, asf + ch);
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string str; cin >> str;
	printPermutations(str, "");

	return 0;
}