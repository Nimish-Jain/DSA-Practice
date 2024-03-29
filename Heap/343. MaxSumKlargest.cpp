#include <bits/stdc++.h>
using namespace std;

int kthLargestSum(int arr[], int n, int k)
{
	// array to store predix sums
	int sum[n + 1];
	sum[0] = 0;
	sum[1] = arr[0];
	for (int i = 2; i <= n; i++)
		sum[i] = sum[i - 1] + arr[i - 1];

	priority_queue<int, vector<int>, greater<int> > Q;

	// loop to calculate the contiguous subarray sum position-wise
	for (int i = 1; i <= n; i++)
	{
		// loop to traverse all positions that form contiguous subarray
		for (int j = i; j <= n; j++)
		{
			int x = sum[j] - sum[i - 1];

			// if queue has less then k elements, then simply push it
			if (Q.size() < k)
				Q.push(x);

			else
			{
				// if the min heap has equal to k elements then just check if the largest
				//kth element is smaller than x then insert else its of no use
				if (Q.top() < x)
				{
					Q.pop();
					Q.push(x);
				}
			}
		}
	}

	// the top element will be then kth largest element
	return Q.top();
}

int main()
{
	int a[] = { 10, -10, 20, -40 };
	int n = sizeof(a) / sizeof(a[0]);
	int k = 6;

	cout << kthLargestSum(a, n, k);
	return 0;
}
