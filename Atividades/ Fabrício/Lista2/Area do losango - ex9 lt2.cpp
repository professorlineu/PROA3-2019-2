/**********************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 9 - Área do losango em m²
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declaração de variáveis
   float fDmaior = 0;
   float fDmenor = 0;
   float fArea  = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a diagonal maior: ";
    cin >> fDmaior;

    cout << "Digite a diagonal menor: ";
    cin >> fDmenor;

    cout << endl;

    fArea = (fDmaior * fDmenor)/2;

    cout << "Área do losango = " << fArea << "m²" << endl;

    return 0;
}
