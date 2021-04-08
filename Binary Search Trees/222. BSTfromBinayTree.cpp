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

//create bst from inorder or sorted vector
void createBST(Node* root, vector<int> &in, int &i)
{
	if (!root)
		return;
	createBST(root->left, in, i);
	root->data = in[i++];
	createBST(root->right, in, i);
}

//Push data to a vector
void inorder(vector<int> &in, Node* root)
{
	if (!root)
		return;
	inorder(in, root->left);
	in.push_back(root->data);
	inorder(in, root->right);
}

Node *binaryTreeToBST (Node *root)
{
	//Your code goes here
	vector<int> in;
	inorder(in, root);
	sort(in.begin(), in.end());
	int i = 0;
	createBST(root, in, i);
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