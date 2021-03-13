//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class node
{
    int data;
    node *next;
    node *prev;
    node (int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }

};

void pairSum(node* head, int data) {
    node* first = head;
    node* second = head;
    while (second->next != NULL)
        second = second->next;
    bool f = false;
    while (first != NULL and second != NULL and first != second and second->next != first) {
        if ((first->data + second->data) == data) {
            f = true;
            cout << "Found";
            first = first->next;
            second = second->prev;
        }
        else {
            if ((first->data + second->data) < data)
                first = first->next;
            else second = second->prev;
        }
    }
    if (f == false) cout << "Not Found";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    return 0;
}