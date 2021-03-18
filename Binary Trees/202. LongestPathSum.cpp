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

pair<int, int> solve(Node* root) {
	if (!root) return {0, 0};
	pair<int, int> a = solve(root->left);
	pair<int, int> b = solve(root->right);

	if (a.first > b.first) return { a.first + 1, a.second + root->data };
	if (a.first < b.first) return { b.first + 1, b.second + root->data };
	else return {a.first + 1, max(a.second, b.second) + root->data};
}

int sumOfLongRootToLeafPath(Node* root)
{
	// Code here
	pair<int, int> ans = solve(root);
	return ans.second;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
