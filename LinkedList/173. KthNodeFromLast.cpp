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

int getNthFromLast(Node *head, int n)
{
	Node* fast = head;
	Node* slow = head;
	int cnt = 0;
	for (int i = 1; i < n; i++) {
		fast = fast->next;
		if (fast == NULL) return -1;
	}
	while (fast->next != NULL) {
		fast = fast->next;
		slow = slow->next;
	}
	return slow->data;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}