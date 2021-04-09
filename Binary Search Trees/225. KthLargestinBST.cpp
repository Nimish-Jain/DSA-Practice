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

void solve(Node* root, int &k, int &cnt) {
	if (root == NULL or cnt >= k) return ;
	solve(root->right, k, cnt);
	k--;
	if (k == 0) {
		cnt = root->data;
		return;
	}
	solve(root->left, k, cnt);
}

int kthLargest(Node *root, int k)
{
	//Your code here
	int cnt = 0;
	solve(root, k, cnt);
	return cnt;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}