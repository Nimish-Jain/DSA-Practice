//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

string chooseandswap(string a) {
	// Code Here
	set<char> s;
	for (int i = 0; i < a.length(); i++)
		s.insert(a[i]);

	for (int i = 0; i < a.length(); i++) {
		s.erase(a[i]);
		if (s.empty()) break;
		char ch = *s.begin(); //value at top iterator
		if (ch < a[i]) {
			int ch2 = a[i]; //current element
			for (int j = 0; j < a.length(); j++) { //replace loop
				if (a[j] == ch) a[j] = ch2;
				else if (a[j] == ch2) a[j] = ch;
			}
			break;
		}
	}
	return a;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}