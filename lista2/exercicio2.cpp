/**********************************************************
- Autor:   Alysson Victor Felix
- Descri��o: Exercicios propostos - exercicios 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
int A1 = 0;
int A2 = 0;
int A3 = 0;
int Multiplica = 0;

   setlocale(LC_ALL,"");
    system("color F1");

cout << "inserir o valor do primeiro numero: ";
cin >> A1;

cout << "inserir o valor do segundo numero: ";
cin >> A2;

cout << "inserir o valor do terceiro numero: ";
cin >> A3;

Multiplica = A1*A2*A3;


cout << "o resultado da multiplicacao �: " <<Multiplica ;






    return 0;
}
