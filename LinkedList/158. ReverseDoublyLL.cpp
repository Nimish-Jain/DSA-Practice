//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class Node
{
    int data;
    Node *next;
    Node *prev;
    Node (int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }

};

Node* reverseDLL(Node * head)
{
    Node* temp;
    Node* p = head;
    Node* q = head;
    while (q != NULL) {
        p = q;
        swap(q->prev, q->next);
        q = q->prev;
    }
    return p;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    return 0;
}