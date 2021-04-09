#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* mergeTrees(node *root1, node *root2, int m, int n)
{
    // Store inorder traversal of
    // first tree in an array arr1[]
    int *arr1 = new int[m];
    int i = 0;
    storeInorder(root1, arr1, &i);

    // Store inorder traversal of second
    // tree in another array arr2[]
    int *arr2 = new int[n];
    int j = 0;
    storeInorder(root2, arr2, &j);

    // Merge the two sorted array into one
    int *mergedArr = merge(arr1, arr2, m, n);

    // Construct a tree from the merged
    // array and return root of the tree
    return sortedArrayToBST (mergedArr, 0, m + n - 1);
}

void printInorder(node* root)
{
    if (root == NULL)
        return;

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int *merge(int arr1[], int arr2[], int m, int n)
{
    int *mergedArr = new int[m + n];
    int i = 0, j = 0, k = 0;

    // Traverse through both arrays
    while (i < m && j < n)
    {
        // Pick the smaller element and put it in mergedArr
        if (arr1[i] < arr2[j])
        {
            mergedArr[k] = arr1[i];
            i++;
        }
        else
        {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If there are more elements in first array
    while (i < m)
    {
        mergedArr[k] = arr1[i];
        i++; k++;
    }

    // If there are more elements in second array
    while (j < n)
    {
        mergedArr[k] = arr2[j];
        j++; k++;
    }

    return mergedArr;
}

void storeInorder(node* node, int inorder[], int *index_ptr)
{
    if (node == NULL)
        return;

    storeInorder(node->left, inorder, index_ptr);

    inorder[*index_ptr] = node->data;
    (*index_ptr)++;

    storeInorder(node->right, inorder, index_ptr);
}

//Push data to a vector easy way
// void inorder(vector<int> &in, Node* root)
// {
//     if (!root)
//         return;
//     inorder(in, root->left);
//     in.push_back(root->data);
//     inorder(in, root->right);
// }

node* sortedArrayToBST(int arr[], int start, int end)
{
    if (start > end)
        return NULL;

    /* Get the middle element and make it root */
    int mid = (start + end) / 2;
    node *root = new node(arr[mid]);

    /* Recursively construct the left subtree and make it
    left child of root */
    root->left = sortedArrayToBST(arr, start, mid - 1);

    /* Recursively construct the right subtree and make it
    right child of root */
    root->right = sortedArrayToBST(arr, mid + 1, end);

    return root;
}

int main()
{
    //create 1st tree
    node *root1 = new node(100);
    root1->left = new node(50);
    root1->right = new node(300);
    root1->left->left = new node(20);
    root1->left->right = new node(70);

    //create 2nd tree
    node *root2 = new node(80);
    root2->left = new node(40);
    root2->right = new node(120);

    node *mergedTree = mergeTrees(root1, root2, 5, 3);

    printInorder(mergedTree);

    return 0;
}
