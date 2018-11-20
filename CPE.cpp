#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
using namespace std;


int main()
{
	string str1;
	string str2;
	cin >> str1 >> str2;
	int com[100][100];
	int max = 0;

	for (int i = 1; i <= str1.size(); i++)
	{
		for (int j = 1; j <= str2.size(); j++)
		{
			if (str1[i - 1] == str2[j - 1])
			{
				com[i][j] = com[i - 1][j - 1] + 1;
				if (com[i][j] > max) { max = com[i][j]; }
			}
			else
			{
				com[i][j] = 0;
			}
		}
	}
	cout << max << endl;



	system("pause");
	return 0;
}
