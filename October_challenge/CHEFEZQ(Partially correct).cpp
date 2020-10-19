/*
Contest Code:OCT20B Problem Code:CHEFEZQ

Chef published a blog post, and is now receiving many queries about it. On day i, he receives Qi queries.
But Chef can answer at most k queries in a single day.

Chef always answers the maximum number of questions that he can on any given day (note however that this cannot be more than k).
The remaining questions (if any) will be carried over to the next day.

Fortunately, after n days, the queries have stopped. Chef would like to know the first day during which he has some free time,
i.e. the first day when he answered less than k questions.

Input:
First line will contain T, the number of testcases. Then the testcases follow.
The first line of each testcase contains two space separated integers n and k.
The second line of each testcase contains n space separated integers, namely Q1,Q2,...Qn.

Output:
For each testcase, output in a single line the first day during which chef answers less than k questions.
*/

#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t, n, k;
	cin >> t; //test cases
	while (t--)
	{
		cin >> n >> k;
		int Q[n], lQues = 0, i;
		for (i = 0; i < n; i++)
		{
			cin >> Q[i];
			lQues += Q[i] - k;
			if (lQues < 0)
			{
				break;
			}
		}
		if (lQues < 0)
		{
			cout << i + 1 << endl;
		}
		else
		{
			while (lQues >= 0)
			{
				lQues -= k;
				i++;
			}
			cout << i << endl;
		}
	}
	return 0;
}
