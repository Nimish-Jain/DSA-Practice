//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

char* reverse(char *str, int len)
{
	//code here
	stack<int> s;
	for (int i = 0; i < len; i++) {
		s.push(str[i]);
	}
	for (int i = 0; i < len; i++) {
		str[i] = s.top();
		s.pop();
	}
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