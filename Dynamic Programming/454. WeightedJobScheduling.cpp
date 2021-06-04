//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

struct Job
{
	int id;	 // Job Id
	int dead; // Deadline of job
	int profit; // Profit if job is over before or on deadline
};

static bool comp(Job a, Job b) {
	return a.profit > b.profit;
}
//Function to find the maximum profit and the number of jobs done.
vector<int> JobScheduling(Job arr[], int n)
{
	// your code here
	sort(arr, arr + n, comp);

	int completed = 0, profit = 0;
	bool check[n] = {0};

	for (int i = 0; i < n; i++) {
		for (int j = min(n, arr[i].dead - 1); j >= 0; j--) {
			if (check[j] == false) {
				completed += 1;
				profit += arr[i].profit;
				check[j] = true;
				break;
			}
		}
	}
	return {completed, profit};

}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}