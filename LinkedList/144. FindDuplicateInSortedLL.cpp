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

node *removeDuplicates(node *root)
{
// your code goes here

	node* head = root;
	if (!head) return NULL;
	while (head->next != NULL) {
		if (head->data == head->next->data) {
			head->next = head->next->next;
		}
		else {
			head = head->next;
		}
	}
	return root;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}