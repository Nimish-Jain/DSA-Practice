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

int countPairs(node* first, node* second, int data) {
    int cnt = 0;
    while (first != NULL and second != NULL and first != second and second->next != first) {
        if ((first->data + second->data) == data) {
            cnt++;
            first = first->next;
            second = second->prev;
        }
        else {
            if ((first->data + second->data) < data)
                first = first->next;
            else second = second->prev;
        }
    }
    return cnt;
}

int countTriplets(node* head, int x) {
    if (head == NULL) return 0;
    node* curr, first, last;
    int count = 0;
    last = head;
    while (last->next != NULL) last = last->next;

    //traversing the entire doubly list
    for (node* curr = head; curr != NULL; curr = curr->next) {
        first = curr->next;
        count += countPairs(first, last, x - curr->data);
    }
    return count;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    return 0;
}