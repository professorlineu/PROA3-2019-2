/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 2 - Exercício 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float  f_PesoKg = 0, f_Pesog = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o peso em quilos: "; // Recebe o valor da massa em kilogramas
    cin >> f_PesoKg;

    f_Pesog = f_PesoKg * 1000; //Calcula o valor da massa em gramas

    cout << "\nO peso em gramas é: " << f_Pesog;

	return 0;
}
