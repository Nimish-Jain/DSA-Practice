//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void dfs(Node* node, Node* copy, vector<Node*> &visited) {
	visited[copy->val] = copy; //store address of parent/root in visited array instead of 0/1

	for (auto nbr : node->neighbors) {
		if (visited[nbr->val] == NULL) { //nbr hasn't been visited yet
			Node* newNode = new Node(nbr->val);
			(copy->neighbors).push_back(newNode); //push newNode to ans->neighbors
			dfs(nbr, newNode, visited);
		}
		else { //nbr already visited
			(copy->neighbors).push_back(visited[nbr->val]); // push curr nbr->val to ans->neighbors
		}
	}
}

Node* cloneGraph(Node* node) {
	if (node == NULL)
		return NULL;
	vector<Node*> visited(1001, NULL);
	Node* copy = new Node(node->val); //creating a copy root.
	dfs(node, copy, visited);

	return copy;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}