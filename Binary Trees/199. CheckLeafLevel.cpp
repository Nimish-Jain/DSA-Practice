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


bool f = 1;

int solve(Node* root) {
	if (!root) return 0;
	int l = solve(root->left);
	int r = solve(root->right);
	if (root->left and root->right and l != r) f = 0;
	return 1 + max(l, r);
}

bool check(Node *root)
{
	//Your code here
	f = 1;
	solve(root);
	return f;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}