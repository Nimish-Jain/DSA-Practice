//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int findSubarray(vector<int> arr, int n ) {
	int sum = 0;
	unordered_map<int, int> map;
	map[0] = 1;
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		temp += arr[i];
		if (map.find(temp) != map.end())
		{
			sum += map[temp];
			map[temp]++;
		}
		else
			map[temp]++;
	}
	return sum;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}