// C++ programs to search a word in a 2D grid
#include <bits/stdc++.h>
using namespace std;

#define R 3
#define C 14

// For searching in all 8 direction
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

bool search2D(char grid[R][C], int row, int col, string word)
{
    // If first character of word doesn't match with given starting point in grid.
    if (grid[row][col] != word[0])
        return false;

    int len = word.length();

    // Search word in all 8 directions
    // starting from (row, col)
    for (int dir = 0; dir < 8; dir++) {
        // Initialize starting point for current direction
        int k, rd = row + x[dir], cd = col + y[dir];

        for (k = 1; k < len; k++) {
            // If out of bound break
            if (rd >= R || rd < 0 || cd >= C || cd < 0)
                break;

            // If not matched,  break
            if (grid[rd][cd] != word[k])
                break;

            // Moving in particular direction
            rd += x[dir], cd += y[dir];
        }

        // If all character matched, then value of must
        // be equal to length of word
        if (k == len)
            return true;
    }
    return false;
}

void patternSearch(char grid[R][C],
                   string word)
{
    // Consider every point as starting point and search given word
    for (int row = 0; row < R; row++)
        for (int col = 0; col < C; col++)
            if (search2D(grid, row, col, word))
                cout << "pattern found at " << row << ", " << col << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    char grid[R][C] = { "GEEKSFORGEEKS",
                        "GEEKSQUIZGEEK",
                        "IDEQAPRACTICE"
                      };

    patternSearch(grid, "GEEKS");
    // cout << endl;
    // patternSearch(grid, "EEE");
    return 0;
}