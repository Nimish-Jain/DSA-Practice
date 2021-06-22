//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class MyComparator {
public:
	int operator()(Node *a, Node *b) {
		return b->data < a->data;
	}
};


class Solution {
public:
	//Function to merge K sorted linked list.

	Node * mergeKLists(Node *arr[], int N)
	{
		priority_queue<Node *, vector<Node *>, MyComparator> q;

		for (int i = 0; i < N; i++) {
			if (arr[i]) {
				q.push(arr[i]);
			}
		}

		Node *dummy = (Node *)malloc(sizeof(Node));
		Node *tail = dummy;

		while (!q.empty()) {
			Node *temp = q.top();
			q.pop();
			if (temp->next) {
				q.push(temp->next);
			}

			tail->next = temp;
			tail = tail->next;
		}

		return dummy->next;
	}
};

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}