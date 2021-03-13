//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class node {
public:
    int data;
    node* next, bottom;

    node(int val)
    {
        data = val;
        next = NULL;
        bottom = NULL;
    }
};

Node* mergeTwoLists(Node*a, Node* b) {
    Node* temp = new Node(0);
    Node* res = temp;

    while (a != NULL and b != NULL) {
        if (a->data < b->data) {
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else {
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }
    //for remaining elememts after comparisons are over
    if (a) temp->bottom = a;
    else temp->bottom = b;

    return res->bottom;
}

Node* flatten(Node* root) {
    //Base Case
    if (root == NULL or root->next == NULL) return root;
    //Rec Case
    root->next = flatten(root->next);
    //Meeting Faith with Expectations
    root = mergeTwoLists(root, root->next);

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