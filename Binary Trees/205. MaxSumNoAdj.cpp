//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

unordered_map<node*, int> dp;

int func(node* root) {
	if (!root) return 0;

	if (dp[root]) return dp[root]; //Memoisation

	int inc = root->data;
	if (root->left) {
		inc += func(root->left->left);
		inc += func(root->left->right);
	}
	if (root->right) {
		inc += func(root->right->left);
		inc += func(root->right->right);
	}

	int exc = func(root->left) + func(root->right);

	dp[root] = max(inc, exc);
	return dp[root];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
