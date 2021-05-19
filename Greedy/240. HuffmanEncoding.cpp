//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int x) {
		data = x;
		left = right = NULL;
	}
};

class compare {
public:
	bool operator()(node* l, node* r) {
		return l->data > r->data;
	}
};

void preOrder(vector<string> &res, node* root, string s) {
	if (!root) return;

	if (!root->left and !root->right) res.push_back(s);

	preOrder(res, root->left, s + "0");

	preOrder(res, root->right, s + "1");
}


vector<string> huffmanCodes(string S, vector<int> f, int N)
{
	priority_queue <node *, vector<node*>, compare> pq;
	for (int i = 0; i < f.size(); i++) {
		node* temp = new node(f[i]);
		pq.push(temp);
	}

	vector<string> res;
	for (int i = 1; i < N; i++) {
		node* x = pq.top();
		pq.pop();

		node* y = pq.top();
		pq.pop();

		node* temp = new node(x->data + y->data);
		temp->left = x;
		temp->right = y;

		pq.push(temp);
	}

	preOrder(res, pq.top(), "");
	return res;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}