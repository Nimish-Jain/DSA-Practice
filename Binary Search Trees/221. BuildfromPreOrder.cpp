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

node* createBST(int arr[], int start, int end) {
	if (start > end) return NULL;

	node* root = new node(arr[start]);
	int i;
	//finding the next greater value in the array for placement of i
	for (i = start; i <= end; i++) {
		if (arr[i] > root->data)
			break;
	}
	root->left = createBST(arr, start + 1, i - 1);
	root->right = createBST(arr, i, end);

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

	int pre[] = {10, 4, 2, 8, 5, 9, 15, 12, 20};
	node* root = createBST(pre, 0, 8);
	inorder(root);
	return 0;
}