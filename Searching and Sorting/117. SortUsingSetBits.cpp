//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

static bool comp(int a, int b)
{
	return __builtin_popcount(a) > __builtin_popcount(b);
}

void sortBySetBitCount(int arr[], int n)
{
	stable_sort(arr, arr + n, comp);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}