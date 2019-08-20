/**********************************************************
- Autor:allison
- Descrição: lista 2 exercicio 3
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{

 float fnumero1 = 0;
 float fnumero2 = 0;
 float fresultado = 0;

 setlocale(LC_ALL,"");
 cout << "\nInsira o valor da primeira nota: ";
 cin >> fnumero1;
 cout << "\nInsira o segundo valor da segunda nota: ";
 cin >> fnumero2;

 fresultado = fnumero1 / fnumero2;

 cout << "\nO valor da sua divisão é de: " << fresultado;

 getch();
}
