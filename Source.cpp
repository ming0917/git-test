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
#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define NN 1000000
using namespace std;

int main() {
	

	int n;
	cin >> n;
	while (n--)
	{
		bool prime[505] = { 0 };
		int num;
		cin >> num;
		int sum = 1;
		for (int a = 2; a < num/2; a++)
		{
			if (num%a == 0 && prime[a]==0)
			{
				sum += a;
				prime[a] = 1;
				if (a != num / a) { sum += num / a; prime[(num / a)] = 1; }
			}
		}
		if (sum < num) { cout << "deficient" << endl; }
		else if (sum == num) { cout << "perfect" << endl; }
		else {cout << "abundant" << endl;
		}
	}

	
	system("pause");
	return 0;

}