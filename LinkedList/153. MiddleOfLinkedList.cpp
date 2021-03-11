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