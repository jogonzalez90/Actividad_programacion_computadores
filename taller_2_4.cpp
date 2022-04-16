//#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int Aux = 0;
	int Arr[10] = { 0 };
	cout << "Este programa ordena 10 enteros ingresados por el usuario" << endl;
	for (int i = 0; i <10; ++i)
	{
		cout << "Favor ingresar dato " << i << endl;
		cin >> Arr[i];
	}
	for (int j = 0; j <10; ++j)
	{
		for (int k = j + 1; k <10; ++k)
		{
			if (Arr[j]>Arr[k])
			{
				Aux = Arr[k];
				Arr[k] = Arr[j];
				Arr[j] = Aux;
			}
			{
			}
		}
	}
	cout << "El arreglo ordenado es " << endl;
	for (int i = 0; i <10; ++i) {
		cout << Arr[i] << " ";
	}
	cout << endl;
	return 0;
}
