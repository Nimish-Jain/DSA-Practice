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

Node* segregate(Node *head) {
    map<int, int>m;
    Node* temp = head;
    while (temp != NULL) {
        m[temp->data]++;
        temp = temp->next;
    }
    temp = head;
    while (m[0]--) {
        head->data = 0;
        head = head->next;
    }
    while (m[1]--) {
        head->data = 1;
        head = head->next;
    }
    while (m[2]--) {
        head->data = 2;
        head = head->next;
    }
    return temp;

}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif


    return 0;
}