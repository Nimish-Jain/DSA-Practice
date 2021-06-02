//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[1001][1001];

int answer(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0)
        return 0;

    if (dp[n - 1][W] != -1)
        return dp[n - 1][W];

    if (wt[n - 1] <= W) {
        return dp[n - 1][W] = max(val[n - 1] + answer(W - wt[n - 1], wt, val, n - 1), answer(W, wt, val, n - 1));
    }

    return dp[n - 1][W] = answer(W, wt, val, n - 1);

}

int knapSack(int W, int wt[], int val[], int n)
{
    // Your code here
    memset(dp, -1, sizeof(dp));
    return answer(W, wt, val, n);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif



    return 0;
}