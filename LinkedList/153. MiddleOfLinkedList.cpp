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

//Single pass ans using Runner Technique
node* midPoint(node* head) {
	if (head == NULL or head->next == NULL)
		return head;
	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}


//One Itr to calc length, then half to reach mid
ListNode* middleNode(ListNode* head) {
	int cnt = 0;
	ListNode* n = head;
	while (n) {
		cnt++;
		n = n->next;
	}
	n = head;
	for (int i = 0; i < cnt / 2; i++)
		n = n->next;
	return n;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}