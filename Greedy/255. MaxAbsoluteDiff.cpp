//Code :: Nimish Jain
#include <bits/stdc++.h>
using namespace std;

int MaxSumDifference(int a[], int n)
{
	vector<int> finalSequence;
	sort(a, a + n);

	// In this loop first we will insert one smallest element not entered till that time
	// in final sequence and then enter a highest element (not entered till that time) in
	// final sequence so that we have large difference value.
	for (int i = 0; i < n / 2; ++i) {
		finalSequence.push_back(a[i]);
		finalSequence.push_back(a[n - i - 1]);
	}

	// If there are odd elements, push the middle element at the end.
	if (n % 2 != 0)
		finalSequence.push_back(a[n / 2]);

	int MaximumSum = 0;

	for (int i = 0; i < n - 1; ++i) {
		MaximumSum = MaximumSum + abs(finalSequence[i] - finalSequence[i + 1]);
	}

	// absolute difference of last element and 1st element
	MaximumSum = MaximumSum + abs(finalSequence[n - 1] - finalSequence[0]);

	return MaximumSum;
}

int main()
{
	int a[] = { 1, 2, 4, 8 };
	int n = sizeof(a) / sizeof(a[0]);

	cout << MaxSumDifference(a, n) << endl;
}
