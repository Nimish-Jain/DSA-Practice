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

node* reversek(node* &head, int k) {
	node* prevptr = NULL;
	node* currptr = head;
	node* nextptr;
	int cnt = 0;

	while (currptr != NULL and count < k) {
		nextptr = currptr->next;
		currptr->next = prevptr;

		prevptr = currptr;
		currptr = nextptr;

		count++;
	}

	if (nextptr != NULL)
		head->next = reversek(nextptr, k);

	return prevptr;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}