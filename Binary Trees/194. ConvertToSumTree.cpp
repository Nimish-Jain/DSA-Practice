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

int solve(Node* root) {
	if (!root) return 0;

	int ls = solve(root->left);
	int rs = solve(root->right);
	int temp = root->data;
	root->data = ls + rs;

	return (temp + root->data);
}

void toSumTree(Node *root)
{
	// Your code here
	solve(root);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
