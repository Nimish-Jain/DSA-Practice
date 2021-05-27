#include<bits/stdc++.h>
using namespace std;

int lcs(string &X, string &Y)
{
	int m = X.length(), n = Y.length();

	int L[2][n + 1];

	// Binary index, used to index current row and previous row.
	bool bi;

	for (int i = 0; i < m + 1; i++)
	{
		// Compute current
		// binary index
		bi = i & 1;

		for (int j = 0; j < n + 1; j++)
		{
			if (i == 0 || j == 0)
				L[bi][j] = 0;

			else if (X[i - 1] == Y[j - 1])
				L[bi][j] = L[1 - bi][j - 1] + 1;

			else
				L[bi][j] = max(L[1 - bi][j], L[bi][j - 1]);
		}
	}

	return L[bi][n];
}

int main()
{
	string X = "AGGTAB";
	string Y = "GXTXAYB";

	cout << "Length of LCS is " << lcs(X, Y);

	return 0;
}
