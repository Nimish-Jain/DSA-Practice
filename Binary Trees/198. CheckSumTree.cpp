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

int f = 1;
int solve(Node* root) {
	if (!root) return 0;
	if (!root->left and !root->right) return root->data;
	if (f == 0) return 0;

	int a = solve(root->left);
	int b = solve(root->right);

	if (a + b != root->data) f = 0;
	return a + b + root->data;
}

bool isSumTree(Node* root)
{
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