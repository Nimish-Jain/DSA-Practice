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

void removeLoop(Node* head)
{
	Node* low = head;
	Node* high = head;

	while (low != NULL and high != NULL and high->next != NULL) {
		low = low->next;
		high = high->next->next;
		if (low == high)
			break;
	}

	if (low == head) {
		while (high->next != low) {
			high = high->next;
		}
		high->next = NULL;
	}

	else if (low == high) {
		low = head;
		while (low->next != high->next) {
			high = high->next;
			low = low->next;
		}
		high->next = NULL;
	}
}

void deleteCycle(node* &head) {
	node* slow = head;
	node* fast = head;

	do
	{
		slow = slow->next;
		fast = fast->next->next;
	} while (slow != fast);

	fast = head;
	while (slow->next != fast->next) {
		fast = fast->next;
		slow = slow->next;
	}
	slow->next = NULL;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}