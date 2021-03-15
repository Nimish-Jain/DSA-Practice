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

vector<int> diagonal(Node *root)
{
	queue<Node*> q;
	vector<int> ans;
	if (!root) return ans;
	q.push(root);
	while (!q.empty()) {
		Node* curr = q.front();
		q.pop();
		while (curr != NULL) {
			if (curr->left) q.push(curr->left);
			ans.push_back(curr->data);
			curr = curr->right;
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
