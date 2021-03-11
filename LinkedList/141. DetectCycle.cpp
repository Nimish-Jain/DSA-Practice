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

bool detectCycle(node* &head) {
	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow) {
			return true;
		}
	}
	return false;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}