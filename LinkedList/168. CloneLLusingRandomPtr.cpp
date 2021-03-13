//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class Node {
	int data;
	Node* next;
	Node* arb;

	Node(int _data) {
		data = _data;
		next = NULL;
		arb = NULL;
	}
};

Node* copyList(Node* head) {
	Node* iter = head;
	Node* front = head;

	//1. Making copy
	while (iter != NULL) {
		front = iter->next;
		Node* copy = new Node(iter->data);
		iter->next = copy;
		copy->next = front;

		iter = front;
	}
	//2. Assigning random pointer
	iter = head;
	while (iter != NULL) {
		if (iter->arb != NULL)
			iter->next->arb = iter->arb->next; //copy ka arb = original ka arb
		iter = iter->next->next;
	}

	//Restoring original list
	iter = head;
	Node* dummy = new Node(0);
	Node* copy = dummy;

	while (iter != NULL) {
		front = iter->next->next;
		copy->next = iter->next;
		iter->next = front;
		copy = copy->next;
		iter = front;
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