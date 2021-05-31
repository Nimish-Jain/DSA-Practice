#include <bits/stdc++.h>
using namespace std;

int carAssembly(int a[][4], int t[][4], int *e, int *x)
{
	int T1[4], T2[4], i;

	// time taken to leave first station in line 1 & line 2
	T1[0] = e[0] + a[0][0];
	T2[0] = e[1] + a[1][0];

	// Fill tables T1[] and T2[] using the recursive relations
	for (i = 1; i < 4; i++) {
		T1[i] = min(T1[i - 1] + a[0][i], T2[i - 1] + t[1][i] + a[0][i]);
		T2[i] = min(T2[i - 1] + a[1][i], T1[i - 1] + t[0][i] + a[1][i]);
	}

	// Consider exit times and retutn minimum
	return min(T1[NUM_STATION - 1] + x[0], T2[NUM_STATION - 1] + x[1]);
}

int main()
{
	int a[][4] = {{4, 5, 3, 2}, {2, 10, 1, 4}};
	int t[][4] = {{0, 7, 4, 5}, {0, 9, 2, 8}};
	int e[] = {10, 12}, x[] = {18, 7};

	cout << carAssembly(a, t, e, x);

	return 0;
}