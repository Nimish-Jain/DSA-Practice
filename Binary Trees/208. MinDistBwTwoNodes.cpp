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

int search(Node* root, int key, int level) {
	if (!root) return -1;

	if (root->data == key) return level;

	int left = search(root->left, key, level + 1);
	if (left != -1) return left;

	return search(root->right, key, level + 1);
}

int findDist(Node* root, int a, int b) {
	Node* lcaNode = lca(root, a, b);

	int l1 = search(lcaNode, a, 0);
	int l2 = search(lcaNode, b, 0);

	return l1 + l2;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
