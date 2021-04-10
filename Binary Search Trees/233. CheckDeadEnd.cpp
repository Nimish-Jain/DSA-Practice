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

bool isdead(Node* root, int min, int max) {
	if (root == NULL)
		return false;
	if (min == max || (min == INT_MIN && max == 1) )
		return true;
	return isdead(root->left, min, root->data - 1) || isdead(root->right, root->data + 1, max);
}

bool isDeadEnd(Node *root) {
	return isdead(root, INT_MIN, INT_MAX);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}