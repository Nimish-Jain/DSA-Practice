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

	string str1 = "ABCD", str2 = "CDAB";

	string temp = str1 + str1;
	if (temp.find(str2) != string::npos) cout << "Found";
	else cout << "Not Found";


	return 0;
}