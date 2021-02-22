//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int *findTwoElement(int *arr, int n) {
	int rep, mis;
	//repeating
	for (int i = 0; i < n; i++)
	{
		if (arr[abs(arr[i]) - 1] < 0)
			rep = abs(arr[i]);
		else
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
	}
	//missing
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			mis = i + 1;
			break;
		}
	}
	//returning
	int *ans = new int[2];
	ans[0] = rep;
	ans[1] = mis;
	return ans;
}

// 2nd Approach
// int n = 5;
// int arr[] = {2, 4, 1, 2, 5};
// vector<int> v;

// for (int i = 1; i <= n; i++)
// 	v.push_back(i);

// int rep, mis;
// for (auto i : map)
// {
// 	if (i.second > 1)
// 		rep = i.first;
// 	if (i.second == 0)
// 		mis = i.first;
// }
// cout << rep << " " << mis;