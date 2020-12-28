//Code :: Nimish Jain
#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (n % 2 == 1) cout << -1;
        else {
            int l = 0, cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '{') l++;
                if (s[i] == '}') l--;

                if (l < 0)
                {
                    l = 1;
                    cnt++;
                }
            }
            cnt = cnt + l / 2;
            cout << cnt;
        }
        cout << endl;
    }

    return 0;
}