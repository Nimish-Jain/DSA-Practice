//Code :: Nimish Jain
#include<bits/stdc++.h>

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n; cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    //Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            swap(arr[i][j], arr[j][i]);
    }

    //Reverse columns
    for (int i = 0; i < n; i++)
    {
        //code for reversing array func
        int l = 0; int r = n - 1;
        while (l < r) {
            swap(arr[i][l], arr[i][r]);
            l++;
            r--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
//I/p ::
// 4
// 11
// 12
// 13
// 14
// 21
// 22
// 23
// 24
// 31
// 32
// 33
// 34
// 41
// 42
// 43
// 44

//o/p ::
// 41 31 21 11
// 42 32 22 12
// 43 33 23 13
// 44 34 24 14