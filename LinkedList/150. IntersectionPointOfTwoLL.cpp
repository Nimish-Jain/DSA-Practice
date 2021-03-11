//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class node {
public:
	int data;
	node* next;

	node(int val)
	{
		data = val;
		next = NULL;
	}
};

int intersectPoint(Node* head1, Node* head2)
{
	if (head1 == NULL or head2 == NULL) return -1;

	Node* a = head1;
	Node* b = head2;

	while (a != b) {
		if (a == NULL) {
			a = head2;
		}
		else a = a->next;

		if (b == NULL) {
			b = head1;
		}
		else b = b->next;
	}
	return a->data;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}

// Map Approach giving TLE
// int intersectPoint(Node* head1, Node* head2)
// {
// 	std::unordered_map<Node*,int> map;

// 	while (head1 != NULL) {
// 		map[head1]++;
// 		head1 = head1->next;
// 	}
// 	while (head2 != NULL) {

// 		if (map.find(head2) == map.end()){
// 			map[head2]++;
// 			head2 = head2->next;
// 	    }
// 		else break;
// 	}
// 	return head2->data;
// }