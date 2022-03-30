//#include "stdafx.h"
//Codigo para determinar de tres variables ingresadas por ususario
//Cual es mayor y menor
#include<iostream>
using namespace std;


int main()
{
	int a, b, c;
	a = b = c = 0;
	cout << "Favor ingresar variables a,b,c" << endl;
	cin >> a >> b >> c;
	if ((a > b) && (b > c))
		cout << "Mayor a menor c" << endl;
	else if ((b > a) && (a > c))
	{
		cout << "Mayor b menor c" << endl;

	}
	else if ((c > b) && (b > a))
	{
		cout << "Mayor c menor menor a" << endl;
	
	}
	else if ((b>c)&&(c>a))
	{
		cout << "Mayor b menor a" << endl;
	}
	else if ((a>c)&&(c>b))
	{
		cout << "Mayor a menor b" << endl;
	}
	else if ((c>a)&&(a>b))
	{
		cout << "Mayor c menor b" << endl;
	}

    return 0;
}
