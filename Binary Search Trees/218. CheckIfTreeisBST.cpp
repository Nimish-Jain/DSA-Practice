//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

bool isBST(Node* root, int minv = INT_MIN, int maxv = INT_MAX) {
	if (root == NULL) return 1;

	if (root->data >= minv and root->data <= maxv and isBST(root->left, minv, root->data - 1) and isBST(root->right, root->data + 1, maxv)) {
		return 1;
	}

	return 0;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	node* root = build();

	return 0;
}