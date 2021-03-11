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

Node* reverse(Node* &head) {
	Node* prevptr = NULL;
	Node* currptr = head;
	Node* nextptr;

	while (currptr) { 			//while(currptr != NULL)
		nextptr = currptr->next;
		currptr->next = prevptr;

		prevptr = currptr;
		currptr = nextptr;
	}
	return prevptr;
}

Node* addOne(Node* head) {
	head = reverse(head);
	bool f = true;

	Node* cur = head;
	while (cur != NULL and f == true) {
		if (cur->next == NULL and cur->data == 9) {
			cur->data = 1;
			Node* temp = new Node(0);
			temp->next = head;
			head = temp;
			cur = cur->next;
		}
		else if (cur->data == 9) {
			cur->data = 0;
			cur = cur->next;
		}
		else {
			cur->data = cur->data + 1;
			cur = cur->next;
			f = false;
		}
	}
	head = reverse(head);
	return head;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}