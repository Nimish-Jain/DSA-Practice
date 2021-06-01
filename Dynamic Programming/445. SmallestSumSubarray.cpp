#include <bits/stdc++.h>
using namespace std;

int smallestSumSubarr(int arr[], int n)
{
	// to store the minimum value that is ending
	// up to the current index
	int currSum = INT_MAX;

	// to store the minimum value encountered so far
	int minSum = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		// if currSum > 0, then it could not possibly
		// contribute to the minimum sum further
		if (currSum > 0)
			currSum = arr[i];

		// else add the value arr[i] to currSum
		else
			currSum += arr[i];

		// update minSum
		minSum = min(minSum, currSum);
	}

	return minSum;
}

int main()
{
	int arr[] = {3, -4, 2, -3, -1, 7, -5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Smallest sum: " << smallestSumSubarr(arr, n);
	return 0;
}
