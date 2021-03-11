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


Node* findIntersection(Node* head1, Node* head2)
{
	unordered_map<int, int> map;
	Node* ans = new Node(0);
	Node* dummy = ans;
	while (head1 != NULL) {
		map[head1->data]++;
		head1 = head1->next;
	}
	while (head2 != NULL) {
		map[head2->data]++;
		if (map[head2->data] == 2) {
			ans->next = new Node(head2->data);
			ans = ans->next;
		}
		head2 = head2->next;
	}
	return dummy->next;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}