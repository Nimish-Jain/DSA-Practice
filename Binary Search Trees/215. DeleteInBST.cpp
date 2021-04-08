//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int d) {
		val = d;
		left = NULL;
		right = NULL;
	}
};

TreeNode* deleteNode(TreeNode* root, int key) {
	if (!root)
		return NULL;

	else if (key < root->val) {
		root->left = deleteNode(root->left, key);
		return root;
	}

	else if (key == root->val) {
		//found the TreeNode to be deleted
		//1. TreeNode with 0 children -> leaf TreeNode
		if (root->left == NULL and root->right == NULL) {
			delete root;
			return NULL;
		}
		//2. TreeNode with 1 child
		if (root->left != NULL and root->right == NULL) {
			TreeNode* temp = root->left;
			delete root;
			return temp;
		}
		if (root->left == NULL and root->right != NULL) {
			TreeNode* temp = root->right;
			delete root;
			return temp;
		}
		//3. TreeNode with 2 children
		TreeNode* replace = root->right;

		while (replace->left != NULL)
			replace = replace->left; //replace will now point to the inorder successor

		root->val = replace->val;
		root->right = deleteNode(root->right, replace->val);
		return root;
	}

	else {
		root->right = deleteNode(root->right, key);
		return root;
	}

}