/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 2 - Exercício 13
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>

using namespace std;

int main ()
{
    int  iNUM, iNUM_1, iNUM_2, iNUM_3, iNUM_4, iNUM_5, iNUM_6, iNUM_7, iNUM_8, iNUM_9, iNUM_10;

    system("cls");

    setlocale(LC_ALL,"");
    system("color F1");

	cout << "\nDigite um número: "; // Recebe valor do número
	cin >> iNUM;

    iNUM_1 = 1 * iNUM;
    iNUM_2 = 2 * iNUM;
    iNUM_3 = 3 * iNUM;
    iNUM_4 = 4 * iNUM;
    iNUM_5 = 5 * iNUM;
    iNUM_6 = 6 * iNUM;
    iNUM_7 = 7 * iNUM;
    iNUM_8 = 8 * iNUM;
    iNUM_9 = 9 * iNUM;
    iNUM_10 = 10 * iNUM;

    cout << "\n" << iNUM << " x 0 = 0";

	cout << "\n" << iNUM << " x 1 = " << iNUM_1;
    cout << "\t\t" << iNUM << " x 6 = " << iNUM_6;

    cout << "\n" << iNUM << " x 2 = " << iNUM_2;
    cout << "\t\t" << iNUM << " x 7 = " << iNUM_7;

    cout << "\n" << iNUM << " x 3 = " << iNUM_3;
    cout << "\t\t" << iNUM << " x 8 = " << iNUM_8;

    cout << "\n" << iNUM << " x 4 = " << iNUM_4;
    cout << "\t\t" << iNUM << " x 9 = " << iNUM_9;

    cout << "\n" << iNUM << " x 5 = " << iNUM_5;
    cout << "\t\t" << iNUM << " x 10 = " << iNUM_10;


	getch();
}
