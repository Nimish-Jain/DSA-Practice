//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int search(vector<int>& nums, int target) {
	int low = 0, high = nums.size() - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2; // == h+l/2
		if (nums[mid] == target)
			return mid;
		else if (nums[mid] >= nums[low]) {
			if (nums[mid] >= target and nums[low] <= target) high = mid - 1;
			else low = mid + 1;
		}
		else {
			if (nums[mid] <= target and nums[high] >= target) low = mid + 1;
			else high = mid - 1;
		}
	}
	return -1;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
	int target = 0;
	cout << search(nums, target);

	return 0;
}