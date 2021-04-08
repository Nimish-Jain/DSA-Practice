//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node* next;
	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
		next = NULL;
	}
};

node *pre = NULL;
void populateNext(struct node* root) {
	if (root == NULL)
		return;
	populateNext(root->left);
	if (pre)
		pre->next = root;
	pre = root;
	populateNext(root->right);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}