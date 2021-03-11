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

Node* addTwoNumbers(Node* l1, Node* l2) {
	Node* dummy = new Node();
	Node* temp = dummy;
	int carry = 0;
	while (l1 != NULL or l2 != NULL or carry) {
		int sum = 0;
		if (l1 != NULL) {
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2 != NULL) {
			sum += l2->val;
			l2 = l2->next;
		}
		sum += carry;
		carry = sum / 10;
		Node* n = new Node(sum % 10);
		temp->next = n;
		temp = temp->next;
	}
	return reverse(dummy->next);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}