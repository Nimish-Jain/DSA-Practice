//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

priority_queue<int> maxheap; //maxheap to the left
priority_queue<int, vector<int>, greater<int> > minheap; // minHeap to the right
void insertHeap(int &x)
{
	if (maxheap.empty()) {
		maxheap.push(x);
		return;
	}

	if (maxheap.size() > minheap.size()) {
		if (maxheap.top() > x) {
			minheap.push(maxheap.top());
			maxheap.pop();
			maxheap.push(x);
		}
		else
			minheap.push(x);
	}

	else {
		if (x < maxheap.top())
			maxheap.push(x);

		else {
			minheap.push(x);
			maxheap.push(minheap.top());
			minheap.pop();
		}
	}
}

//Function to balance heaps.
void balanceHeaps()
{

}

//Function to return Median.
double getMedian()
{
	if (maxheap.size() > minheap.size())
		return maxheap.top();
	else
		return (maxheap.top() + minheap.top()) / 2.0;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}