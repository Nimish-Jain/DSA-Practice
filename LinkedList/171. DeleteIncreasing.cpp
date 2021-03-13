//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int val)
	{
		data = val;
		next = NULL;
	}
};

//Recursive Solution
Node* compute(Node* head) {
	if (head->next == NULL) return head;
	Node* temp = compute(head->next);

	if (temp->data > head->data) return temp;
	else head->next = temp;

	return head;
}

void deleteAtHead(Node* &head) {
	Node* todelete = head;
	head = head->next;
	delete todelete;
}

void deletion(Node* &head, int val) {
	if (head == NULL) {
		return;
	}
	if (head->next == NULL) {
		deleteAtHead(head);
		return;
	}
	Node* temp = head;
	while (temp->next->data != val) {
		temp = temp->next;
	}
	Node* todelete = temp->next;
	temp->next = temp->next->next;
	delete todelete;
}

Node* compute(Node* head) {
	Node* temp = head;
	while (temp->next->next != NULL) {
		if (temp->next->data > temp->data)
			deletion(temp, temp->data);

		temp = temp->next;
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