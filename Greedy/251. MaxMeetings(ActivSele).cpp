//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

static bool comp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

void maxMeetings(int start[], int end[], int n)
{
	vector <pair<int, int>> v;
	for (int i = 0; i < n; i++)
		v.push_back(make_pair(start[i], end[i]));

	sort(v.begin(), v.end(), comp);
	int res = 1;
	int fin = v[0].second;

	for (int i = 1; i < n; i++) {
		if (v[i].first > fin) {
			fin = v[i].second;
			res++;
		}
	}
	cout << res;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int s[] = { 1, 3, 0, 5, 8, 5 };
	int f[] = { 2, 4, 6, 7, 9, 9 };

	int n = sizeof(s) / sizeof(s[0]);

	maxMeetings(s, f, n);

	return 0;
}