//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
	sort(arr, arr + n);
	sort(dep, dep + n);

	int ans = 1;
	int j = 0, i = 1;

	while (i < n) {
		if (arr[i] <= dep[j])
			ans++;
		else
			j++;

		i++;
	}
	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}