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

//Building the tree
node* buildTree() {
	int d; cin >> d;
	if (d == -1) return NULL;

	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void printPostOrder(node* root) {
	if (root == NULL) return;

	printPostOrder(root->left);
	printPostOrder(root->right);
	cout << root->data << " ";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	node* root = buildTree();
	printPostOrder(root);

	return 0;
}
