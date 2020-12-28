//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

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

    int x; cin >> x;
    int i = 0;
    int j = n - 1;
    while (i<n and j >= 0)
    {
        if (x == arr[i][j])
        {
            cout << i << endl << j << endl;
            return 0;
        }

        else if (x < arr[i][j])
            j--;
        else
            i++;
    }

    cout << "Not Found";

    return 0;
}