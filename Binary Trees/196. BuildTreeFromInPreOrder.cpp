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

int preIndex = 0;

Node* buildFromInPre(int *in, int *pre, int s, int e) {
	//static int i = 0;
	//Base Case
	if (s > e) return NULL;

	//Recursive Case
	Node* root = new Node(pre[preIndex++]);

	int index = -1;
	for (int j = s; j <= e; j++) {
		if (in[j] == root->data) {
			index = j;
			break;
		}
	}

	root->left = buildFromInPre(in, pre, s, index - 1);
	root->right = buildFromInPre(in, pre, index + 1, e);

	return root;
}

Node* buildTree(int in[], int pre[], int n) {
	preIndex = 0;
	Node* ans = buildFromInPre(in, pre, 0, n - 1);
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
