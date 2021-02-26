//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<vector<int>> fourSum(vector<int> &num, int target) {
	vector<vector<int>> res;
	if (num.empty())
		return res;
	int n = num.size();
	sort(num.begin(), num.end());

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			int target2 = target - num[i] - num[j];

			int front = j + 1;
			int back = n - 1;

			while (front < back)
			{
				int two_sum = num[front] + num[back];
				if (two_sum < target2)
					front++;
				else if (two_sum > target2)
					back--;
				else {
					vector<int> quad(4, 0);
					quad[0] = num[i];
					quad[1] = num[j];
					quad[2] = num[front];
					quad[3] = num[back];

					res.push_back(quad);

					//checking duplicates for no. 3
					while (front < back and num[front] == quad[2]) ++front;


					//checking duplicates for no. 4
					while (front < back and num[back] == quad[3]) --back;
				}
			}

			//checking duplicates for no. 2
			while (j + 1 < n and num[j + 1] == num[j]) ++j;

			//checking duplicates for no. 1
			while (i + 1 < n and num[i + 1] == num[i]) ++i;
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