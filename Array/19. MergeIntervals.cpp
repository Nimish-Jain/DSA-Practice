//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void PrintStack(stack<pair<int, int>> s)
{
	// If stack is empty then return
	if (s.empty())
		return;

	int x = s.top().first;
	int y = s.top().second;

	// Pop the top element of the stack
	s.pop();

	// Recursively call the function PrintStack
	PrintStack(s);

	// Print the stack element starting
	// from the bottom
	cout << x << " " << y << " ";

	// Push the same element onto the stack
	// to preserve the order
	s.push({x, y});
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	std::vector<pair<int, int>> a;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		a.push_back({x, y});
	}

	sort(a.begin(), a.end()); //O(nlogn) --> Time
	std::stack<pair<int, int>> s;	//O(n) -->Space
	s.push({a[0].first, a[0].second});

	for (int i = 0; i < n; i++)
	{
		int start1, end1, start2, end2;
		start1 = s.top().first;
		end1 = s.top().second;
		start2 = a[i].first;
		end2 = a[i].second;

		if (start2 <= end1)
		{
			s.pop();
			end1 = max(end1, end2);
			s.push({start1, end1});
		}
		else
			s.push({start2, end2});
	}

	// while (!s.empty())
	// {
	// 	cout << s.top().first << " " << s.top().second << endl;
	// 	s.pop();
	// }

	PrintStack(s);

	return 0;
}