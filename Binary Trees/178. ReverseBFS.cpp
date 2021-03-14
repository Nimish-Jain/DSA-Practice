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

vector<int> reverseLevelOrder(Node *root)
{
	// code here
	vector<int> v;
	queue<Node*> q;
	q.push(root);
	while (!q.empty()) {
		Node* f = q.front();
		v.push_back(f->data);
		q.pop();

		if (f->right) q.push(f->right);
		if (f->left) q.push(f->left);
	}
	reverse(v.begin(), v.end());
	return v;
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
