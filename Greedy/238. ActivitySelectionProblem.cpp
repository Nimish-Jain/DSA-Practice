//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

static bool comp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int maxMeetings(int start[], int end[], int n)
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

	return res;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}