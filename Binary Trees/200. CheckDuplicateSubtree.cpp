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

string func(Node* root, unordered_map<string, int> &map) {
	if (!root) return "#";
	string s = "";
	if (!root->right and !root->left) {
		s = to_string(root->data);
		return s;
	}
	s = s + to_string(root->data);
	s = s + func(root->left, map);
	s = s + func(root->right, map);
	map[s]++;
	return s;
}

bool dupSub(Node *root)
{
	std::unordered_map<string, int> map;
	func(root, map);
	for (auto x : map) {
		if (x.second >= 2) return true;
	}
	return false;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}
