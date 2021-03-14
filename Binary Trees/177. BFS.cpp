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

vector<int> levelOrder(Node* root)
{
	vector<int> v;
	queue<Node*> q;
	q.push(root);
	while (!q.empty()) {
		Node* f = q.front();
		v.push_back(f->data);
		q.pop();

		if (f->left) q.push(f->left);
		if (f->right) q.push(f->right);
	}
	return v;
}

//Building the tree
node* buildTree() {
	int d; cin >> d;
	if (d == -1) return NULL;

	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	// node* root = buildTree();
	// BFS(root);

	return 0;
}
