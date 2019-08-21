/**********************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 6 - Peso em quilos para peso em gramas
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declaração de variáveis
   float fKilo = 0;
   float fGram = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o peso em Quilo: ";
    cin >> fKilo;

    fGram = fKilo * 1000;

    cout << "Valor do peso em Gramas: " << fGram << "g";



    return 0;
}
