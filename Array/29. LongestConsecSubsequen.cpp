//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int longestConsSubsequen(int arr[], int n)  //Time -> O(n) Space -> O(n)
{
	set<int> s(arr, arr + n);

	// for (int i = 0; i < n; i++)
	// 	s.insert(arr[i]);

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (!s.count(arr[i] - 1))
		{
			int currNum = arr[i];
			int currStreak = 1;

			while (s.count(currNum + 1))
			{
				currNum += 1;
				currStreak += 1;
			}

			cnt = max(cnt, currStreak);
		}
	}

	return cnt;
}

int findLongestConseqSubseq(int arr[], int n)  //Time -> O(nlogn) Space -> O(1)
{
	sort(arr, arr + n);

	int currentStreak = 1;
	int longestStreak = 1;

	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1]) {
			if (arr[i] == arr[i - 1] + 1) {
				currentStreak += 1;
			}
			else {
				longestStreak = max(longestStreak, currentStreak);
				currentStreak = 1;
			}
		}
	}
	return max(longestStreak, currentStreak);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	// cout << longestConsSubsequen (arr, n);
	cout << findLongestConseqSubseq(arr, n);

	return 0;
}