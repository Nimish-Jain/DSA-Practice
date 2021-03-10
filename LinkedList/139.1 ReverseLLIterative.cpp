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

node* reverseItr(node* &head) {
	node* prevptr = NULL;
	node* currptr = head;
	node* nextptr;

	while (currptr) { 			//while(currptr != NULL)
		nextptr = currptr->next;
		currptr->next = prevptr;

		prevptr = currptr;
		currptr = nextptr;
	}
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