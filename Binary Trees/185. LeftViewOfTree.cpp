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

vector<int> leftView(Node *root)
{
	// Your code here
	vector<int> ans;
	queue<Node*> q;
	if (!root) return ans;
	q.push(root);
	while (!q.empty()) {
		int size = q.size();
		ans.push_back(q.front()->data);
		while (size--) {
			Node* f = q.front();
			q.pop();
			if (f->left) q.push(f->left);
			if (f->right) q.push(f->right);
		}
	}
	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
