//#include "stdafx.h"
//Codigo para determinar el valor de una venta teniendo encuenta el numero de unidades vendidas
//Su valor unitario: $2.98 $4.5 $9.98 $4.49 $6.87
//Y posibilidad para valores invalidos
#include<iostream>                    // Realizamos llamada a libreria iostream
#include<math.h>                      // Realizamos llamada a libreria matematicas
using namespace std;

int main()
{
	int producto;                        // Definimos variable producto como tipo entero para usar en switch
	double a, c, cantidad;               // Definimos variables a,c y cantidada como tipo doble para realizar 
	producto = cantidad = a = c = 0;     // operaciones con decimales e inicilaizamos variables
	cout << "Ingrese numero del producto"<<endl; // Solicitamos numero del producto
	cin >> producto;                               // Ingresamos dato
	cout << "Ingrese cantidad vendida"<<endl;     // Solicitamos la cantidad vendida
	cin >> cantidad;                              // Ingresamos dato
	switch (producto)	{                         // Por ultimo realizamos intruccion switch para buscar el 
	case 1:                                       // precio del prodcuto raelizar operacion y vivualizar.
		a = 2.98;
		c = a*cantidad;
		cout << "El valor de la venta es $"<<  c <<endl;
		break;
	case 2:
		a = 4.5;
		c = a*cantidad;
		cout << "El valor de la venta es $" <<  c << endl;
		break;
	case 3:
		a = 9.98;
		c = a*cantidad;
		cout << "El valor de la venta es $" <<  c << endl;
		break;
	case 4:
		a = 4.49;
		c = a*cantidad;
		cout << "El valor de la venta es $" <<  c << endl;
		break;
	case 5:
		a = 6.87;
		c = a*cantidad;
		cout << "El valor de la venta es $" <<  c << endl;
		break;
	default:
		cout << "Se ha ingresado Numero de producto invalido"<<endl; // Dejamos una opcion con la posibilidad de 
		cout << "Por favor intente de nuevo"<<endl;                  // variables invalidas
		break;
	}


    return 0;
}
