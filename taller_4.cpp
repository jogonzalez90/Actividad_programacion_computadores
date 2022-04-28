//#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
using namespace std;

//Prototipos de las fuciones

void nota_mayor();
void nota_menor();
void promedio();
void desv_est();
void retom_datos();

//Se definen e inicializan variables
struct datos
{
	string nombre;
	float C1, C2, C3, C4;
	float  nota_materia;
}estudiante[8];
float  aux_1[4] = { 0 };
float  aux_2[4] = { 0 };
float Promedio[4] = { 0 };
float des_est[4] = { 0 };



int main()//Funcion principal del main
{
	//Se imprime en pantalla el encabezado de la tabla
	cout << "Nombre estudiante" << setw(8) << "C1" << setw(8) << "C2" << setw(9) << "C3" << setw(9) << "C4";
	cout << setw(14) << "Nota Materia" << setw(11) << "Aprobo" << endl;
	//Ingresamos constantes por funcion
	retom_datos();

	//Creamos tabla estudiantes
	for (int i = 0; i < 8; i++)
	{
		cout << estudiante[i].nombre << setw(19) << estudiante[i].C1 << setw(9) << estudiante[i].C2;
		cout << setw(9) << estudiante[i].C3 << setw(9) << estudiante[i].C4;
		estudiante[i].nota_materia = (estudiante[i].C1 + estudiante[i].C2 + estudiante[i].C3 + estudiante[i].C4) / 4;
		cout << setw(10) << estudiante[i].nota_materia;
		//Evaluamos situacion estudiante aprueba o reprueba
		if (estudiante[i].nota_materia > 2.9)
		{
			cout << setw(12) << "Si" << endl;
		}

		else
		{
			cout << setw(12) << "No" << endl;
		}

	}
	cout << endl;


	//LLamada a funciones

	desv_est();//Desviacion estandar
	promedio();//Promedio
	nota_mayor();//Nota mayor			
	nota_menor(); //Nota menor
	
	//Imprimimos resultados
	cout << "Nota Mayor" << setw(14) << aux_1[0] << setw(9) << aux_1[1] << setw(9) << aux_1[2] << setw(9) << aux_1[3] << endl;
	cout << "Nota Menor" << setw(14) << aux_2[0] << setw(9) << aux_2[1] << setw(9) << aux_2[2] << setw(9) << aux_2[3] << endl;
	cout << "Promedio" << setw(16) << Promedio[0] << setw(9) << Promedio[1] << setw(9) << Promedio[2] << setw(9) << Promedio[3] << endl;
	cout << "Desv-estandar" << setw(11) << des_est[0] << setw(9) << des_est[1] << setw(9) << des_est[2] << setw(9) << des_est[3] << endl;

	return 0;
}

//Definicion de funciones
// Nota Mayor
void nota_mayor() {
	int i, j = 0;
	float  ret = 0;
	//For para evaluar posicion a posicion la nota mayor del curso para C1

	for (int i = j + 1; i < 7; ++i)
	{
		if (estudiante[i].C1 > estudiante[j].C1)
		{
			aux_1[0] = estudiante[i].C1;
			estudiante[j].C1 = estudiante[i].C1;
		}
		else
		{
			aux_1[0] = estudiante[j].C1;
		}
	}


	//For para evaluar posicion a posicion la nota mayor del curso para C2

	for (int i = j + 1; i < 7; ++i)
	{
		if (estudiante[i].C2 > estudiante[j].C2)
		{
			aux_1[1] = estudiante[i].C2;
			estudiante[j].C2 = estudiante[i].C2;
		}
		else
		{
			aux_1[1] = estudiante[j].C2;
		}
	}


	//For para evaluar posicion a posicion la nota mayor del curso para C3

	for (int i = j + 1; i < 7; ++i)
	{
		if (estudiante[i].C3 > estudiante[j].C3)
		{
			aux_1[2] = estudiante[i].C3;
			estudiante[j].C3 = estudiante[i].C3;
		}
		else
		{
			aux_1[2] = estudiante[j].C3;
		}
	}


	//For para evaluar posicion a posicion la nota mayor del curso para C4

	for (int i = j + 1; i < 7; ++i)
	{
		if (estudiante[i].C4 > estudiante[j].C4)
		{
			aux_1[3] = estudiante[i].C4;
			estudiante[j].C4 = estudiante[i].C4;
		}
		else
		{
			aux_1[3] = estudiante[j].C4;
		}
	}


}

//Nota Menor
void nota_menor() {
	int i, j = 0;
	//For para evaluar posicion a posicion la nota menor del curso para C1
	for (int i = j + 1; i < 7; ++i)
	{
		if (estudiante[i].C1< estudiante[j].C1)
		{

			aux_2[0] = estudiante[i].C1;
			estudiante[j].C1 = estudiante[i].C1;
		}
		else
		{
			aux_2[0] = estudiante[j].C1;
		}
	}

	//For para evaluar posicion a posicion la nota menor del curso para C2
	for (int i = j + 1; i < 7; ++i)
	{
		if (estudiante[i].C2< estudiante[j].C2)
		{

			aux_2[1] = estudiante[i].C2;
			estudiante[j].C2 = estudiante[i].C2;
		}
		else
		{
			aux_2[1] = estudiante[j].C2;
		}
	}

	//For para evaluar posicion a posicion la nota menor del curso para C3
	for (int i = j + 1; i < 7; ++i)
	{
		if (estudiante[i].C3< estudiante[j].C3)
		{

			aux_2[2] = estudiante[i].C3;
			estudiante[j].C3 = estudiante[i].C3;
		}
		else
		{
			aux_2[2] = estudiante[j].C3;
		}
	}

	//For para evaluar posicion a posicion la nota menor del curso para C4
	for (int i = j + 1; i < 7; ++i)
	{
		if (estudiante[i].C4< estudiante[j].C4)
		{

			aux_2[3] = estudiante[i].C4;
			estudiante[j].C4 = estudiante[i].C4;
		}
		else
		{
			aux_2[3] = estudiante[j].C4;
		}
	}
}

//Promedio
void promedio() {
	float pri, seg;
	//Calculos para promedio C1
	pri = (estudiante[0].C1 + estudiante[1].C1 + estudiante[2].C1 + estudiante[3].C1);
	seg = (estudiante[4].C1 + estudiante[5].C1 + estudiante[6].C1 + estudiante[7].C1);
	Promedio[0] = (pri + seg) / 8;

	//Calculos para promedio C2
	pri = (estudiante[0].C2 + estudiante[1].C2 + estudiante[2].C2 + estudiante[3].C2);
	seg = (estudiante[4].C2 + estudiante[5].C2 + estudiante[6].C2 + estudiante[7].C2);
	Promedio[1] = (pri + seg) / 8;

	//Calculos para promedio C3
	pri = (estudiante[0].C3 + estudiante[1].C3 + estudiante[2].C3 + estudiante[3].C3);
	seg = (estudiante[4].C3 + estudiante[5].C3 + estudiante[6].C3 + estudiante[7].C3);
	Promedio[2] = (pri + seg) / 8;

	//Calculos para promedio C4
	pri = (estudiante[0].C4 + estudiante[1].C4 + estudiante[2].C4 + estudiante[3].C4);
	seg = (estudiante[4].C4 + estudiante[5].C4 + estudiante[6].C4 + estudiante[7].C4);
	Promedio[3] = (pri + seg) / 8;

}
//Desviacion estandar

void desv_est() {
	float a, b, c, sumatoria, x1 = 0;
	float caudrado[8] = { 0 };

	//Desviacion estandar para C1
	a = (estudiante[0].C1 + estudiante[1].C1 + estudiante[2].C1 + estudiante[3].C1);
	b = (estudiante[4].C1 + estudiante[5].C1 + estudiante[6].C1 + estudiante[7].C1);
	x1 = (a + b) / 8;

	for (int i = 0; i < 8; i++)
	{
		caudrado[i] = pow((estudiante[i].C1 - x1), 2);

	}
	sumatoria = (caudrado[0] + caudrado[1] + caudrado[2] + caudrado[3] + caudrado[4] + caudrado[5] + caudrado[6] + caudrado[7]) / 7;
	des_est[0] = sqrt(sumatoria);

	//Desviacion estandar para C2
	a = (estudiante[0].C2 + estudiante[1].C2 + estudiante[2].C2 + estudiante[3].C2);
	b = (estudiante[4].C2 + estudiante[5].C2 + estudiante[6].C2 + estudiante[7].C2);
	x1 = (a + b) / 8;

	for (int i = 0; i < 8; i++)
	{
		caudrado[i] = pow((estudiante[i].C2 - x1), 2);

	}
	sumatoria = (caudrado[0] + caudrado[1] + caudrado[2] + caudrado[3] + caudrado[4] + caudrado[5] + caudrado[6] + caudrado[7]) / 7;
	des_est[1] = sqrt(sumatoria);

	//Desviacion estandar para C3
	a = (estudiante[0].C3 + estudiante[1].C3 + estudiante[2].C3 + estudiante[3].C3);
	b = (estudiante[4].C3 + estudiante[5].C3 + estudiante[6].C3 + estudiante[7].C3);
	x1 = (a + b) / 8;

	for (int i = 0; i < 8; i++)
	{
		caudrado[i] = pow((estudiante[i].C3 - x1), 2);

	}
	sumatoria = (caudrado[0] + caudrado[1] + caudrado[2] + caudrado[3] + caudrado[4] + caudrado[5] + caudrado[6] + caudrado[7]) / 7;
	des_est[2] = sqrt(sumatoria);

	//Desviacion estandar para C4
	a = (estudiante[0].C4 + estudiante[1].C4 + estudiante[2].C4 + estudiante[3].C4);
	b = (estudiante[4].C4 + estudiante[5].C4 + estudiante[6].C4 + estudiante[7].C4);
	x1 = (a + b) / 8;

	for (int i = 0; i < 8; i++)
	{
		caudrado[i] = pow((estudiante[i].C4 - x1), 2);

	}
	sumatoria = (caudrado[0] + caudrado[1] + caudrado[2] + caudrado[3] + caudrado[4] + caudrado[5] + caudrado[6] + caudrado[7]) / 7;
	des_est[3] = sqrt(sumatoria);
}

//Constantes
void retom_datos() {
	estudiante[0].nombre = "Luisa", estudiante[0].C1 = 4, estudiante[0].C2 = 3, estudiante[0].C3 = 5;
	estudiante[0].C4 = 2;
	estudiante[1].nombre = "Cesar", estudiante[1].C1 = 5, estudiante[1].C2 = 4, estudiante[1].C3 = 5;
	estudiante[1].C4 = 3;
	estudiante[2].nombre = "Maria", estudiante[2].C1 = 2, estudiante[2].C2 = 3, estudiante[2].C3 = 1;
	estudiante[2].C4 = 2;
	estudiante[3].nombre = "Jorge", estudiante[3].C1 = 0, estudiante[3].C2 = 3.5, estudiante[3].C3 = 1.9;
	estudiante[3].C4 = 5;
	estudiante[4].nombre = "Nancy", estudiante[4].C1 = 4, estudiante[4].C2 = 4.5, estudiante[4].C3 = 3.9;
	estudiante[4].C4 = 3;
	estudiante[5].nombre = "Oscar", estudiante[5].C1 = 1, estudiante[5].C2 = 2.5, estudiante[5].C3 = 0;
	estudiante[5].C4 = 3.2;
	estudiante[6].nombre = "Pedro", estudiante[6].C1 = 4.1, estudiante[6].C2 = 3.2, estudiante[6].C3 = 3.9;
	estudiante[6].C4 = 5;
	estudiante[7].nombre = "sandy", estudiante[7].C1 = 3.3, estudiante[7].C2 = 4.3, estudiante[7].C3 = 2.9;
	estudiante[7].C4 = 2.2;
}
