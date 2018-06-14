// numway.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

int num_way(int n);

int main()
{
	cout << num_way(40) << endl;
	system("pause");
    return 0;
}

int num_way( int n)
{
	if (n==0)
	{
		return 1;
	}
	vector<int>num(n +1);
	num[0] = 1;
	for (int i = 1; i < num.size(); i++)
	{
		int total = 0;
		int a[3] = { 1,3,5 };
		for (int c = 0; c < 3; c++)
		{
			if (i - a[c] >= 0)
			{
				total += num[i - a[c]];
			}

		}
		num[i] = total;
		cout << "num[" << i << "]= " << num[i] << endl;
	}

	return num[n];
}
