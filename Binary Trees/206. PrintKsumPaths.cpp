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

void solve(node* root, vector<int> &path, int k) {
	if (!root) return;
	path.push_back(root->data);

	solve(root->left, path, k);
	solve(root->right, path, k);

	int f = 0;
	for (int j = path.size() - 1; j >= 0; j--) {
		f += path[j];
		if (f == k) {
			for (int i = j; i < path.size(); i++)
				cout << path[i] << " ";
			cout << endl;
		}
	}
	path.pop_back();

}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	vector<int> path;
	solve(root, path, k);

	return 0;
}
