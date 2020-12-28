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
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n * n);
        for (int i = 0; i < n * n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n * n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}