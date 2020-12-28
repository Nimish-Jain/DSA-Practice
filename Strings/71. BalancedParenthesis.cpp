//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool ispar(string x)
{
	stack<char> s;
	char a;

	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] == '[' or x[i] == '(' or x[i] == '{')
		{
			s.push(x[i]);
			continue;
		}
		if (s.empty()) return false;

		switch (x[i])
		{
		case ')':
			a = s.top();
			s.pop();
			if (a == '[' or a == '{')
				return false;
			break;

		case ']':
			a = s.top();
			s.pop();
			if (a == '(' or a == '{')
				return false;
			break;

		case '}':
			a = s.top();
			s.pop();
			if (a == '[' or a == '(')
				return false;
			break;
		}
	}
	return (s.empty());
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	if (ispar(s) == true)
		cout << "Balanced";
	else
		cout << "Not Balanced";

	return 0;
}