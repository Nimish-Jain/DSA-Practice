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

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
	if (!root) return;

	else if (key == root->key) {
		if (root->right) {
			suc = root->right;
			while (suc->left != NULL)
				suc = suc->left;
		}
		if (root->left) {
			pre = root->left;
			while (pre->right != NULL)
				pre = pre->right;
		}
	}

	else if (key < root->key) {
		suc = root;
		findPreSuc(root->left, pre, suc, key);
	}

	else {
		pre = root;
		findPreSuc(root->right, pre, suc, key);
	}

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