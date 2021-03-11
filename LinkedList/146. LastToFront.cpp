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

void moveToFront(node* &head) {
	if (!head) return NULL;
	node* temp = head;
	while (head->next != NULL) {
		head = head->next;
	}
	head->next = temp;
	return temp;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}