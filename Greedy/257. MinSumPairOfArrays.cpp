long long int findMinSum(int a[], int b[], int n)
{
    // Sort both arrays
    sort(a, a + n);
    sort(b, b + n);

    // Find sum of absolute differences
    long long int sum = 0 ;
    for (int i = 0; i < n; i++)
        sum = sum + abs(a[i] - b[i]);

    return sum;
}

// Driver code
int main()
{
    // Both a[] and b[] must be of same size.
    long long int a[] = {4, 1, 8, 7};
    long long int b[] = {2, 3, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%lld\n", findMinSum(a, b, n));
    return 0;
}