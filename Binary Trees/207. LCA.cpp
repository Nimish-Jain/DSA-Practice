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

Node* lca(Node* root, int a, int b) {
	if (!root) return NULL;

	if (root->data == a or root->data == b) {
		return root;
	}
	//search in left & right sub-trees
	Node* leftAns = lca(root->left, a, b);
	Node* rightAns = lca(root->right, a, b);

	if (leftAns != NULL and rightAns != NULL)
		return root;

	if (leftAns != NULL) return leftAns;

	return rightAns;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
