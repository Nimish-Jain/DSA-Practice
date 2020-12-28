//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<int> spirallyTraverse(int** a, int n, int m)
{
    int row_start = 0, row_end = n - 1;
    int column_start = 0, column_end = m - 1;

    vector<int> v;

    int tne = m * n;
    int cnt = 0;

    //  int rs = 0, re = n - 1;
    //  int cs = 0, ce = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        //for row_start
        for (int col = column_start; col <= column_end and cnt < tne; col++)
        {   v.push_back (a[row_start][col]);
            cnt++;
        }
        row_start++;

        //for column end
        for (int row = row_start; row <= row_end and cnt < tne; row++)
        {   v.push_back(a[row][column_end]);
            cnt++;
        }
        column_end--;

        //for row end
        for (int col = column_end; col >= column_start and cnt < tne; col--)
        {   v.push_back(a[row_end][col]);
            cnt++;
        }
        row_end--;

        //for column start
        for (int row = row_end; row >= row_start and cnt < tne ; row--)
        {   v.push_back(a[row][column_start]);
            cnt++;
        }
        column_start++;

    }
    return (v);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n, m; cin >> n >> m;

    int** a = new int*[n];
    for (int i = 0; i < m; i++)
        a[i] = new int[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    std::vector<int> v = spirallyTraverse(a, n, m);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}