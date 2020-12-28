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

	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int a[n1], b[n2], c[n3];

	for (int i = 0; i < n1; i++) cin >> a[i];
	for (int i = 0; i < n2; i++) cin >> b[i];
	for (int i = 0; i < n3; i++) cin >> c[i];

	// int temp = n1 > n2 ? n1 : n2;
	// int size = n3 > temp ? n3 : temp;

	sort(a, a + n1);
	sort(b, b + n2);
	sort(c, c + n3);

	std::set<int> v;
	set<int>::iterator itr;

	for (int i = 0; i < n1; ++i)
	{
		if (binary_search(b, b + n2, a[i]) and binary_search(c, c + n3, a[i]))
			v.insert(a[i]);
	}

	for (int i = 0; i < n2; ++i)
	{
		if (binary_search(a, a + n1, b[i]) and binary_search(c, c + n3, b[i]))
			v.insert(b[i]);
	}

	for (int i = 0; i < n3; ++i)
	{
		if (binary_search(b, b + n2, c[i]) and binary_search(a, a + n1, c[i]))
			v.insert(c[i]);
	}

	if (v.size() == 0)
		cout << -1;

	else {
		for (itr = v.begin(); itr != v.end(); ++itr)
			cout << *itr << " ";
	}
	return 0;
}