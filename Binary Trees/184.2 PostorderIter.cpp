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

//Building the tree
node* buildTree() {
	int d; cin >> d;
	if (d == -1) return NULL;

	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void printPostOrderIter(node* root) {
	stack<node*> st;
	node* curr = root;
	node* prev = NULL;

	while (curr != NULL or !st.empty()) {
		if (curr != NULL) {
			st.push(curr);
			curr = curr->left;
		}
		else {
			curr = st.top();
			if (curr->right == NULL or curr->right == prev) {
				cout << curr->val;
				st.pop();
				prev = curr;
				curr = NULL;
			}
			else curr = curr->right;
		}
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	node* root = buildTree();

	printPostOrderIter(root);
	return 0;
}
