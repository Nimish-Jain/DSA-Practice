//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

//Heapify function to maintain heap property.
void heapify(int arr[], int n, int i)
{
	// Your Code Here
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

//Function to build a Heap from array.
void buildHeap(int arr[], int n)
{
	// Your Code Here
	for (int i = (n - 2) / 2; i >= 0; i--)
		heapify(arr, n, i);

}

//Function to sort an array using Heap Sort.
void heapSort(int arr[], int n)
{
	//code here
	buildHeap(arr, n);
	for (int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}