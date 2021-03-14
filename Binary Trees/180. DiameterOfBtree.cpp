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

int height(node* root) {
	if (root == NULL) return 0;

	int ls = height(root->left);
	int rs = height(root->right);
	return (max(ls, rs) + 1);
}

//O(n) time
pair<int, int> fastDiameter(node* root) {
	pair<int, int> p;
	if (root == NULL) {
		p.first = p.second = 0;
		return p;
	}

	pair<int, int> left = fastDiameter(root->left);
	pair<int, int> right = fastDiameter(root->right);

	p.first = max(left.first, right.first) + 1;
	p.second = max(left.first + right.first, max(left.second, right.second));
	return p;
}

//O(n^2) time
int Diameter(node* root) {
	if (root == NULL) return 0;

	int h1 = height(root->left);
	int h2 = height(root->right);

	int op1 = h1 + h2;
	int op2 = Diameter(root->left);
	int op3 = Diameter(root->right);
	return max(op1, max (op2, op3));
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	// node* root = buildTree();

	return 0;
}
