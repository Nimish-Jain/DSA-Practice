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

long long  multiplyTwoLists (Node* l1, Node* l2) {
    long long num1 = 0, num2 = 0;
    while (l1 or l2) {
        while (l1) {
            num1 = (num1 * 10 + l1->data) % 1000000007;
            l1 = l1->next;
        }
        while (l2) {
            num2 = (num2 * 10 + l2->data) % 1000000007;
            l2 = l2->next;
        }
    }
    return (num1 * num2) % 1000000007;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif


    return 0;
}