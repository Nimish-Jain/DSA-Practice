//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

void leftTreeTraversal(Node* root, vector<int> &ans) {
	if (!root) return;
	if (root->left) {
		ans.push_back(root->data);
		leftTreeTraversal(root->left, ans);
	}
	else if (root->right) {
		ans.push_back(root->data);
		leftTreeTraversal(root->right, ans);
	}
}

void leafTraversal(Node* root, vector<int> &ans) {
	if (!root) return;
	leafTraversal(root->left, ans);
	if (!root->left and !root->right) ans.push_back(root->data);
	leafTraversal(root->right, ans);
}

void rightTreeTraversal(Node* root, vector<int> &ans) {
	if (!root) return;
	if (root->right) {
		rightTreeTraversal(root->right, ans);
		ans.push_back(root->data);
	}
	else if (root->left) {
		rightTreeTraversal(root->left, ans);
		ans.push_back(root->data);
	}
}

vector <int> printBoundary(Node *root)
{
	vector<int> ans;
	ans.push_back(root->data);

	leftTreeTraversal(root->left, ans);
	leafTraversal(root, ans);
	rightTreeTraversal(root->right, ans);

	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}