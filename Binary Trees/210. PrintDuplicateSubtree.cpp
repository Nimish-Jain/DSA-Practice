//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};


map<string, int> mp;
vector<int> v;

string help(Node* root) {
	string s = "";
	if (root == NULL)
		return "$";

	s = s + help(root->left);
	s = s + to_string(root->data);
	s = s + help(root->right);

	if (mp[s] == 1) {
		v.push_back(root->data);
	}
	mp[s]++;
	return to_string(root->data);
}

void printAllDups(Node* root)
{
	// Code here
	mp.clear();
	v.clear();
	string s = help(root);
	sort(v.begin(), v.end());

	if (v.size() == 0) cout << "-1";
	else {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}