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

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node* slow = head;
    Node* fast = head;
    while (fast->next != head and fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }
    *head1_ref = head;
    *head2_ref = slow->next;

    slow->next = head;
    Node* curr = *head2_ref;
    while (curr->next != head) {
        curr = curr->next;
    }
    curr->next = *head2_ref;
}


int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    return 0;
}