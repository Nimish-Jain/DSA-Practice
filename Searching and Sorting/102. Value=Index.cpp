#include <bits/stdc++.h>
using namespace std;

//1st way Linear Search
int linearSearch(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == i)
            return i;
    }

    return -1;
}

// 2nd way Binary Search
int binarySearch(int arr[], int low, int high)
{
    if (high >= low)
    {
        int mid = (low + high) / 2; //low + (high - low)/2;
        if (mid == arr[mid])
            return mid;
        if (mid > arr[mid])
            return binarySearch(arr, (mid + 1), high);
        else
            return binarySearch(arr, low, (mid - 1));
    }

    return -1;
}

int main()
{
    int arr[] = { -10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Fixed Point is " << linearSearch(arr, n);
    return 0;
}
