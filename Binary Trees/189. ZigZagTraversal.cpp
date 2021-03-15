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

vector <int> zigZagTraversal(Node* root)
{
	// Code here

	vector<int> ans;
	queue<Node*> q;
	if (!root) return ans;
	q.push(root);
	int flag = 1;
	while (!q.empty()) {
		vector<int> temp;
		int size = q.size();
		while (size--) {
			Node* f = q.front();
			temp.push_back(f->data);
			q.pop();
			if (f->left) q.push(f->left);
			if (f->right) q.push(f->right);
		}
		if (flag % 2 == 0) reverse(temp.begin(), temp.end());
		for (int i = 0; i < temp.size(); i++) ans.push_back(temp[i]);
		flag = !flag;
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
