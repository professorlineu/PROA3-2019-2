/**********************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 6 - Peso em quilos para peso em gramas
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declara��o de vari�veis
   float fKilo = 0;
   float fGram = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o peso em Quilo: ";
    cin >> fKilo;

    fGram = fKilo * 1000;

    cout << "Valor do peso em Gramas: " << fGram << "g";



    return 0;
}
