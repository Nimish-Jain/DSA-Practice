//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node* midPoint(Node* head) {
    if (head == NULL or head->next == NULL)
        return head;
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL and fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node* merge(Node*a, Node* b) {
    //Base Cases
    if (a == NULL) return b;
    if (b == NULL) return a;

    Node* c;
    if (a->data < b->data) {
        c = a;
        c->next = merge(a->next, b);
    }
    else {
        c = b;
        c->next = merge(a, b->next);
    }
    return c;
}

Node* mergeSort(Node* head) {
    //Base case
    if (head == NULL or head->next == NULL)
        return NULL;

    //Rec Case
    //1. Divide about the mid point
    Node* mid = midPoint(head);
    Node* a = head;
    Node* b = mide->next;

    mid->next = NULL;

    //2. Recursively Sorting 2 Parts
    a = mergeSort(a);
    b = mergeSort(b);

    //3. MergeThem
    Node* c = merge(a, b);
    return c;
}




// Node* mergeTwoSorted(Node* &head1, Node* &head2) {
//     Node* dummy = new Node(0);
//     Node* temp = dummy;
//     while (head1 != NULL or head2 != NULL) {
//         if (head1->data < head2->data) {
//             Node* n = new Node(head1->data);
//             head1 = head1->next;
//             temp->next = n;
//             temp = temp->next;
//         }
//         else {
//             Node* n = new Node(head2->data);
//             head2 = head2->next;
//             temp->next = n;
//             temp = temp->next;
//         }
//     }
//     while (head1 != NULL) {
//         Node* n = new Node(head1->data);
//         head1 = head1->next;
//         temp->next = n;
//         temp = temp->next;
//     }
//     while (head2 != NULL) {
//         Node* n = new Node(head2->data);
//         head2 = head2->next;
//         temp->next = n;
//         temp = temp->next;
//     }
//     return dummy->next;
// }

// void insertAtTail(Node* &head, int val)
// {
//     Node* n = new Node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp -> next = n;
// }

void display(Node* head)
{
    Node* temp = head;
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

    Node* head1 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);
    // display(head1);

    Node* head2 = NULL;
    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);
    // display(head2);



    return 0;
}