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

Node* LCA(Node *root, int n1, int n2)
{
	//Your code here
	if (!root) return NULL;
	if (root->data > n1 and root->data > n2)
		return LCA(root->left, n1, n2);
	else if (root->data < n1 and root->data < n2)
		return LCA(root->right, n1, n2);
	else
		return root;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}