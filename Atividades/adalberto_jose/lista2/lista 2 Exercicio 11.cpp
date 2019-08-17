/**********************************************************
- Autor:     Adalberto José
- Descrição: Lista 2 Exercicio 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

       float fdiag1 = 0;
       float fdiag2 = 0;
       float fresultado = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "\nDigite o valor da diagonal maior: ";
      cin>> fdiag1;

     cout<<   "/nDigite o valor da diagonal maior: ";
    cin >> fdiag2;

    fresultado = (fdiag1 * fdiag2)/2;
    cout<<"\nValor da área do losango =";



    return 0;
}
