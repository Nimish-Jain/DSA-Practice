//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int countTriplets(int arr[], int n, int sum)
{
	int cnt = 0;
	sort(arr, arr + n);
	for (int i = 0; i < n - 2; i++)
	{
		int front = i + 1, back = n - 1;
		while (front < back)
		{
			int s = arr[i] + arr[front] + arr[back];
			if (s < sum) {
				cnt += back - front;
				front++;
			}
			else
				back--;
		}
	}
	return cnt;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}