//#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int n = 10;
	for (int i = 1; i <= n; ++i)
	{
		for (int j= 1; j <= i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	int m = 10;
	for (int i = m; i >= 1; --i)
	{
		for (int j= 1; j <= i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	int l = 10;
	int i = 1;
	for (int i = 1; i <= 10; ++i)
	{
		for (int b = 0; b < l; ++b)
		{
			cout << "*";
		}
		cout << endl;
		l -= 1;
		for (int c = 0; c < i; ++c)
		{
			cout << " ";
		}
	}
	cout << endl;


	int z = 10;
	int x = 1;
	for (int x = 1; x <= 10; ++x)
	{
		for (int b = 0; b < z; ++b)
		{
			cout << "*";
		}
		cout << endl;
		z -= 1;
		for (int c = 0; c < x; ++c)
		{
			cout << " ";
		}
	}
	cout << endl;

    return 0;
}
