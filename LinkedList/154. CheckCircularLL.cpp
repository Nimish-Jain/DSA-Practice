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

bool isCircular(Node *head)
{
    // Your code here
    if (head == NULL) return true;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->next == head) return true;
        temp = temp->next;
    }
    return false;
}

int32_t main()
{

    return 0;
}