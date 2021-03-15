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

void convert(Node* root, Node* &head, Node* &prev, int &f) {
	if (!root) return;
	convert(root->left, head, prev, f);

	if (f == 0) {
		f = 1;
		head = root;
		prev = root;
	}
	else {
		prev->right = root;
		prev->right->left = prev;
		prev = prev->right;
	}

	convert(root->right, head, prev, f);
}

Node * bToDLL(Node *root)
{
	// your code here
	Node* head = NULL;
	Node* prev = NULL;

	int f = 0;
	convert(root, head, prev, f);
	return head;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
