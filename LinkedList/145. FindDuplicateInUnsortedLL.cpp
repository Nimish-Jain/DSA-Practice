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

node * removeDuplicates( node *head)
{
	unordered_map<int, int> map;
	node* cur = head;
	map[cur->data] = 1;
	node* prev = cur;
	cur = cur->next;
	while (cur != NULL) {
		if (map[cur->data]) {
			prev->next = cur->next;
			free(cur);
		}
		else {
			map[cur->data] = 1;
			prev = cur;
		}
		cur = prev->next;
	}
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