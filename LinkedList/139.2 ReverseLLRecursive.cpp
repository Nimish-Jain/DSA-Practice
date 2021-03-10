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

node* reverseRec(node* &head) {
	//BaseCase
	if (head == NULL or head->next == NULL) //either empty or single node
		return head;

	node* newHead = reverseRec(head->next);
	head->next->next = head;
	head->next = NULL;
	return newHead;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}