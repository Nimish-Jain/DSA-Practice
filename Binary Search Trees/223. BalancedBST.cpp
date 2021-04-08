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

void storeBSTNodes(Node* root, vector<Node*> &nodes)
{
	if (root == NULL)
		return;

	// Store nodes in Inorder (which is sorted
	// order for BST)
	storeBSTNodes(root->left, nodes);
	nodes.push_back(root);
	storeBSTNodes(root->right, nodes);
}

//construct binary tree
Node* buildTreeUtil(vector<Node*> &nodes, int start, int end)
{
	if (start > end)
		return NULL;

	/* Get the middle element and make it root */
	int mid = (start + end) / 2;
	Node *root = nodes[mid];

	/* Using index in Inorder traversal, construct left and right subtress */
	root->left  = buildTreeUtil(nodes, start, mid - 1);
	root->right = buildTreeUtil(nodes, mid + 1, end);

	return root;
}

// This functions converts an unbalanced BST to a balanced BST
Node* buildTree(Node* root)
{
	// Store nodes of given BST in sorted order
	vector<Node *> nodes;
	storeBSTNodes(root, nodes);

	// Constucts BST from nodes[]
	int n = nodes.size();
	return buildTreeUtil(nodes, 0, n - 1);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}