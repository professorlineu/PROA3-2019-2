/**********************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 7 - Área do trapézio em m²
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declaração de variáveis
   float fBmaior = 0;
   float fBmenor = 0;
   float fAltura = 0;
   float fArea   = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a base maior: ";
    cin >> fBmaior;

    cout << "Digite a base menor: ";
    cin >> fBmenor;

    cout << "Digite a altura: ";
    cin >> fAltura;

    cout << endl;

    fArea = ((fBmaior + fBmenor) * fAltura)/2;


    cout << "Área do trapézio = " << fArea << "m²" << endl;

    return 0;
}
