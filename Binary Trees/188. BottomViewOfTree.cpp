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

// Method that returns the bottom view.
vector <int> bottomView(Node *root)
{
	// Your Code Here
	map<int, int> map;
	vector<int> v;
	queue<pair<Node*, int> > q;
	if (!root) return v;
	q.push({root, 0});
	while (!q.empty()) {
		Node* f = q.front().first;
		int h = q.front().second;
		q.pop();
		map[h] = f->data;
		if (f->left) q.push({f->left, h - 1});
		if (f->right) q.push({f->right, h + 1});
	}
	for (auto x : map) v.push_back(x.second);
	return v;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
