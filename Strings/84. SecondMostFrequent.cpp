//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

string secFrequent (string arr[], int n)
{
	unordered_map<string, int> map;
	for (int i = 0; i < n; i++)
	{
		map[arr[i]]++;
	}

	int first_max = INT_MIN, sec_max = INT_MIN;
	for (auto it = map.begin(); it != map.end(); it++)
	{
		if (it->second > first_max)
		{
			sec_max = first_max;
			first_max = it->second;
		}
		else if (it->second > sec_max and it->second != first_max)
			sec_max = it->second;
	}

	for (auto it = map.begin(); it != map.end(); it++)
	{
		if (it->second == sec_max)
			return it->first;
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string arr[] = { "ccc", "aaa", "ccc", "ddd", "aaa", "aaa" };
	cout << secFrequent(arr, 6);

	return 0;
}