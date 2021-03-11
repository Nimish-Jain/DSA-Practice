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

node* mergeTwoSorted(node* &head1, node* &head2) {
    node* dummy = new node(0);
    node* temp = dummy;
    while (head1 != NULL or head2 != NULL) {
        if (head1->data < head2->data) {
            node* n = new node(head1->data);
            head1 = head1->next;
            temp->next = n;
            temp = temp->next;
        }
        else {
            node* n = new node(head2->data);
            head2 = head2->next;
            temp->next = n;
            temp = temp->next;
        }
    }
    while (head1 != NULL) {
        node* n = new node(head1->data);
        head1 = head1->next;
        temp->next = n;
        temp = temp->next;
    }
    while (head2 != NULL) {
        node* n = new node(head2->data);
        head2 = head2->next;
        temp->next = n;
        temp = temp->next;
    }
    return dummy->next;
}

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp -> next = n;
}

void display(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    node* head1 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);
    // display(head1);

    node* head2 = NULL;
    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);
    // display(head2);

    display(mergeTwoSorted(head1, head2));


    return 0;
}