//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int majorityElement(int a[], int size)
{

	int val = size / 2;
	unordered_map<int, int> map;
	for (int i = 0; i < size; i++)
		map[a[i]]++;
	for (auto x : map)
		if (x.second > val) return x.first;
	return  -1;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int arr[] = {3, 1, 3, 3, 2};
	cout << majorityElement(arr, 5) << endl;

	return 0;
}