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

class LinkedList {
public:
	node* head;
	node* tail;
};

LinkedList flatten(node* root) {
	LinkedList l;
	if (root == NULL) {
		l.head = l.tail = NULL;
		return l;
	}

	//case 1. Leaf Node
	if (root->left == NULL and root->right == NULL) {
		l.head = l.tail = root;
		return l;
	}

	//case 2.1 One Node (Left not null)
	if (root->left != NULL and root->right == NULL) {
		LinkedList leftll = flatten(root->left);
		leftll.tail->right = root;

		l.head = leftll.head;
		l.tail = root;

		return l;
	}

	//case 2.2 One Node (Right not null)
	if (root->left == NULL and root->right != NULL) {
		LinkedList rightll = flatten(root->right);
		root->right = rightll.head;

		l.head = root;
		l.tail = rightll.tail;

		return l;
	}

	//case 3 Two Nodes (Both left and right present)
	if (root->left != NULL and root->right != NULL) {
		LinkedList leftll = flatten(root->left);
		LinkedList rightll = flatten(root->right);

		leftll.tail->right = root;
		root->right = rightll.head;

		l.head = leftll.head;
		l.tail = rightll.tail;

		return l;
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}