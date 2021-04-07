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

bool search(node* root, int key) {
	if (root == NULL)
		return false;
	if (root->data == key)
		return true;

	//rec case
	if (key <= root->data)
		return search(root->left, key);
	else
		return search(root->right, key);
}

node* insertInBST(node* root, int data) {
	//base case
	if (root == NULL) {
		return new node(data);
	}

	//Rec case
	if (data <= root->data)
		root->left = insertInBST(root->left, data);
	else
		root->right = insertInBST(root->right, data);
	return root;
}

node* build() {
	int d; cin >> d;

	node* root = NULL;

	while (d != -1) {
		root = insertInBST(root, d);
		cin >> d;
	}
	return root;
}

void inorder(node* root) {
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	node* root = build();
	inorder(root);
	cout << endl;

	int key = 7;
	if (search(root, key)) cout << "Present";
	else cout << "Not Present";

	return 0;
}