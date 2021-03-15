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

int flag = 1;
int heightCheck(Node* root) {
	if (root == NULL) return 0;

	int ls = heightCheck(root->left);
	int rs = heightCheck(root->right);
	if (abs(ls - rs) > 1) flag = 0;
	return (max(ls, rs) + 1);
}

bool isBalanced(Node *root)
{
	//  Your Code here
	flag = 1;
	heightCheck(root);
	return flag;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
