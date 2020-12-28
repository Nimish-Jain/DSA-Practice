//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool shuffleCheck(string first, string second, string result)
{
	if (first.length() + second.length() != result.length()) {
		return false;
	}
	int i = 0, j = 0, k = 0;

	while (k != result.length())
	{
		if (i < first.length() && first.at(i) == result.at(k))
			i++;

		// check if first character of result matches the first character of second string
		else if (j < second.length() && second.at(j) == result.at(k))
			j++;

		// if the character doesn't match
		else
			return false;

		// access next character of result
		k++;
	}

	// after accessing all characters of result
	// if either first or second has some characters left
	if (i < first.length() || j < second.length()) {
		return false;
	}

	return true;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string first = "XY";
	string second = "12";
	string result1 = "1XY2";
	string result2 = "Y12X";

	cout << shuffleCheck(first, second, result1);

	return 0;
}