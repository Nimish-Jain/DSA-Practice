//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

// L T D R // W N E S
int dx[4] = { -1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void dfs(vector<vector<int>>& image, int i, int j, int ch, int newColor, int R, int C) {

	//base condition
	if (i<0 or j<0 or i >= R or j >= C)
		return;

	//boundary crossing condition
	if (image[i][j] != ch)
		return;

	//Rec cases
	image[i][j] = newColor;

	for (int k = 0; k < 4; k++) {
		dfs(image, i + dx[k], j + dy[k], ch, newColor, R, C);
	}

}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
	int R = image.size();
	int C = image[0].size();

	int ch = image[sr][sc];

	if (image[sr][sc] == newColor)
		return image;

	dfs(image, sr, sc, ch, newColor, R, C);

	return image;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}