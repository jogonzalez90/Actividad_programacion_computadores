//#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
	int matriz[5][5];
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (j == i) {
				matriz[i][j] = 0;
			}
			else if (j > i) {
				matriz[i][j] = 2;
			}
			else
				matriz[i][j] = -4;
			{
				cout << setw(3) << matriz[i][j];
			}	
			{		
			}
			{
			}
		}
		cout << endl;
	}
    return 0;
}
