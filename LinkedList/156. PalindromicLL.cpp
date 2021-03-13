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

Node* reverse(Node* &head) {
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    while (currptr) {           //while(currptr != NULL)
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

bool isPlindrome(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL and fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = head;
    slow = reverse(slow);
    while (slow != NULL) {
        if (fast->data != slow->data) return false;
        slow = slow->next;
        fast = fast->next;
    }
    return true;
}


int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    return 0;
}