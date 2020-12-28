//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;


int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		int min_val;
		int max_val = INT_MIN;
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}

		for (int i = 1; i < n; i++) {
			for (int j = 1; j < m; j++) {
				if (a[i][j] == 1) {
					min_val = min(a[i - 1][j], a[i][j - 1]);
					a[i][j] = min(a[i - 1][j - 1], min_val) + 1;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				max_val = max(max_val, a[i][j]);
			}
		}

		cout << max_val << endl;

	}

	return 0;
}


// void maxSubMatrix(int** arr, int n, int m)
// {
//     int s[n][m];
//     memset(s,0, sizeof s);
//     for(int i=0; i<n; i++)
//         s[i][0] = arr[i][0];
//     for(int j=0; j<m; j++)
//         s[0][j] = arr[0][j];

//     for(int i=1; i<n; i++)
//     {
//         for(int j=1; j<m; j++)
//         {
//             if(arr[i][j]==1)
//                 s[i][j] = 1 + min({arr[i-1][j-1], arr[i-1][j], arr[i][j-1]});
//             else
//                 s[i][j]=0;
//         }
//     }

//     int mx = 0;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             mx = max(mx, s[i][j]);
//         }
//     }

//     cout<< mx <<endl;

// }