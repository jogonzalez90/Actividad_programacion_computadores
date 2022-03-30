//#include "stdafx.h"
//Codigo para dederminar de dos varibles ingrasadas por usuario
//Si a es multiplo o no de b
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int a, b, c; 
	a = b = c = 0;
	cout << "Favor ingresar valor de variables a,b"<< endl;
	cin >> a >> b;
	c = a%b;
	if (c == 0)
		cout << "Variable a es mutiplo de b " << c << endl;
	else
	{
		cout << "Variable a no es multiplo de b " << c << endl;
	}

    return 0;
}

