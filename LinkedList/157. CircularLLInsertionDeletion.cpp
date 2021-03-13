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

void insert(node* &head, int data) {
    node* n = new node(data);
    node* temp = head;

    n->next = head;
    if (temp != NULL) {
        while (temp->next != head)
            temp = temp->next;
        temp->next = n;
    }
    else n->next = n; //self loop
    head = n;
}

node* getNode(node* &head, int data) {
    node* temp = head;
    while (temp->next != head) {
        if (temp->data == data) {
            return temp;
        }
        temp = temp->next;
    }
    if (temp->data == data) return temp;
    return NULL;
}

void deleteNode(node* &head, int data) {
    node* del = getNode(head, data);
    if (del == NULL) return;
    if (head == del) head = head->next;
    node* temp = head;

    while (temp->next != del) {
        temp = temp->next;
    }
    temp->next = del->next;
    delete del;
}

void display(node* head) {
    node* temp = head;
    while (temp->next != head) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
    return;
}

int32_t main()
{
// #ifndef ONLINE_JUDGE
//     freopen("in.txt", "r", stdin);
//     freopen("out.txt", "w", stdout);
// #endif

    node* head = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    display(head);
    cout << endl;
    deleteNode(head, 20);
    display(head);

    return 0;
}