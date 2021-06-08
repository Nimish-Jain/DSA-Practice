//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int minStepToReachTarget(vector<int> &knightPos, vector<int> &targetPos, int N) {
	int res = 0;
	bool visited[N * N];
	fill(visited, visited + N * N, false);
	pair<int, int> start, target;
	start = make_pair(knightPos[0], knightPos[1]);
	target = make_pair(targetPos[0], targetPos[1]);
	if (start.first == target.first && start.second == target.second) {
		return res;
	}
	queue<pair<int, int>> q;
	q.push(start);
	q.push({ -1, -1});
	while (q.size() > 1) {
		pair<int, int> temp = q.front();
		q.pop();
		if (temp.first == -1 && temp.second == -1) {
			res++;
			q.push({ -1, -1});
		} else if (temp.first == target.first && temp.second == target.second) {
			return res;
		} else {
			int x = temp.first;
			int y = temp.second;
			if (x + 1 <= N && y + 2 <= N && visited[(x + 1 - 1)*N + y + 2 - 1] == false) {
				visited[(x + 1 - 1)*N + y + 2 - 1] = true;
				q.push({x + 1, y + 2});
			}
			if (x + 1 <= N && y - 2 > 0 && visited[(x + 1 - 1)*N + y - 2 - 1] == false) {
				visited[(x + 1 - 1)*N + y - 2 - 1] = true;
				q.push({x + 1, y - 2});
			}
			if (x + 2 <= N && y + 1 <= N && visited[(x + 2 - 1)*N + y + 1 - 1] == false) {
				visited[(x + 2 - 1)*N + y + 1 - 1] = true;
				q.push({temp.first + 2, y + 1});
			}
			if (x + 2 <= N && y - 1 > 0 && visited[(x + 2 - 1)*N + y - 1 - 1] == false) {
				visited[(x + 2 - 1)*N + y - 1 - 1] = true;
				q.push({x + 2, y - 1});
			}
			if (x - 1 > 0 && y + 2 <= N && visited[(x - 1 - 1)*N + y + 2 - 1] == false) {
				visited[(x - 1 - 1)*N + y + 2 - 1] = true;
				q.push({x - 1, y + 2});
			}
			if (x - 1 > 0 && y - 2 > 0 && visited[(x - 1 - 1)*N + y - 2 - 1] == false) {
				visited[(x - 1 - 1)*N + y - 2 - 1] = true;
				q.push({x - 1, y - 2});
			}
			if (x - 2 > 0 && y - 1 > 0 && visited[(x - 2 - 1)*N + y - 1 - 1] == false) {
				visited[(x - 2 - 1)*N + y - 1 - 1] = true;
				q.push({x - 2, y - 1});
			}
			if (x - 2 > 0 && y + 1 <= N && visited[(x - 2 - 1)*N + y + 1 - 1] == false) {
				visited[(x - 2 - 1)*N + y + 1 - 1] = true;
				q.push({x - 2, y + 1});
			}
		}
	}
	return -1;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}