/**********************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 8 - Área do quadrado em m²
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declaração de variáveis
   float fLado1 = 0;
   float fLado2 = 0;
   float fArea  = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o primeiro lado: ";
    cin >> fLado1;

    cout << "Digite o segundo lado: ";
    cin >> fLado2;

    cout << endl;

    fArea = fLado1 * fLado2;

    cout << "Área do quadrado = " << fArea << "m²" << endl;

    return 0;
}
