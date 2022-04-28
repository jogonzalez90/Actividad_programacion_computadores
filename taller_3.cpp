//#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;
//Pototipos necesarios en el progarama

	float circulo();//Prototipo de la funcion circulo
	int cuadrado();	 //Prototipo de la funcion cuadrado
	int rectangulo(int a, int b); //Prototipo de la funcion rectangulo
	float triangulo(float a, float h);//Prototipo de la funcion triangulo
	float trapecio(float a, float b, float h);//Prototipo de la funcion trapecio
int salir=0; //Declaracion de variables globales
int opcion = 0;
float area ;
float a, b, h;


int main()//Funcion principal
{

	while (salir == 0)//Ciclo indefinido
	{
		system("cls");//Borrado de pantalla para iniciar programa
		
		cout << "Este programa permite al usuario hallar el area de 5 figuras Geometricas" << endl;
		cout << "Favor escoger una de las siguientes opciones" << endl;//Instruciones al usuario
		cout << "Circulo opcion 1" << endl;//opcione a escoger en programa
		cout << "Cuadrado opcion 2" << endl;//opcione a escoger en programa
		cout << "Rectangulo opcion 3" << endl;//opcione a escoger en programa
		cout << "Triangulo opcion 4" << endl;//opcione a escoger en programa
		cout << "Trapecio opcion 5" << endl;//opcione a escoger en programa
		cin >> opcion;//Guardamos la eleccion en la variable opcion

		if (opcion == 1)//If de la opcion circulo
		{
			cout << "Favor ingrese longitud del radio" << endl;
			cin >> a;//Ingresamos valor del radio
			circulo();//LLamamos a funcion circulo

			cout << "El area del circulo es " << area <<" Cms"<< endl;
			//Imprimimos resultado
		}
		else if (opcion == 2)//If de la opcion cuadrado
		{

			cout << "Favor ingrese el lado del cadrado"  << endl;
			cin >> a;//Ingresamos valor del lado
			cuadrado();//LLamamos a funcion cuadrado
			cout << "El area del cadrado es " << area << " Cms" << endl;
			//Imprimimos resultado
		}
		else if (opcion == 3) {//If de la opcion rectangulo
			cout << "Favor ingrese lado a del rectangulo" << endl;
			cin >> a;//Ingresamos lado a del rectangulo
			cout << "Favor ingrese lado b del rectangulo" << endl;
			cin >> b;//Ingresamos lado b del rectangulo
			rectangulo(a,b);//LLamamos a funcion rectangulo
			cout << "El area del rectangulo es " << area << " Cms" << endl;
			//Imprimimos resultado
		}
		else  if (opcion == 4)//If de la opcion triangulo
		{
			cout << "Favor ingrese la base del triangulo" << endl;
			cin >> a;//Ingresamos base del triangulo
			cout << "Favor ingrese la altura del triangulo" << endl;
			cin >> h;//Ingresamos altura del triangulo
			triangulo(a, h);//LLamamos a funcion triangulo
			cout << "El area del triangulo es " << area << " Cms" << endl;
			//Imprimimos resultado

		}
		else  if (opcion == 5)//If de la opcion trapecio
		{
			cout << "Favor ingrese primer lado del trapecio" << endl;
			cin >> a;//Ingresamos primer lado del trapecio
			cout << "Favor ingrese segundo lado del trapecio" << endl;
			cin >> b;//Ingresamos segundo lado del trapecio
			cout << "Favor ingrese la altura del trapecio" << endl;
			cin >> h;//Ingresamos segundo lado del trapecio
			trapecio(a, b, h);
			cout << "El area del trapecio es " << area << " Cms" << endl;
			//Imprimimos resultado
		}
		cout << "DESE SALIR: SI=1, NO=0" << endl;//Permitimos al usuario retornar al 
		cin >> salir;//Programa o salir de el




	}

}





//Definicion de funciones

float circulo()//Fucion circulo
{
	area = 3.141592*pow(a, 2);//Hallamos area 
	return area;//Retornamos resultado
}

int cuadrado()//Fucion cuadrado
{
	 area =a*a;//Hallamos area 
	return area;//Retornamos resultado
}

int rectangulo(int a, int b)//Fucion rectangulo
{
	area = a*b;//Hallamos area 
	return area;//Retornamos resultado
}

float triangulo(float a, float b)//Fucion triangulo
{
	area = (a*b)/2;//Hallamos area 
	return area;//Retornamos resultado
}

float trapecio(float a, float b, float h)//Fucion trapecio
{
	area = (h*(a + b)) / 2;//Hallamos area 
	return area;//Retornamos resultado
}


