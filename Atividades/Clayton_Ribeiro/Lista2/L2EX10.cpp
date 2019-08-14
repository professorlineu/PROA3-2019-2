/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 2 - Exercício 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float  f_Lado = 0, f_Area = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o lado do quadrado: "; // Recebe o valor do lado do quadrado
    cin >> f_Lado;

    f_Area = f_Lado * f_Lado; //Calcula o valor da área do quadrado

    cout << "\nA da área do quadrado é: " << f_Area;

	return 0;
}
