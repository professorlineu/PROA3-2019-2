/**********************************************************
- Autor:     Livia Grecco
- Descrição: Lista 2 - Exercício 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

      float fNota1 = 0;
      float fNota2 = 0;
      float fMedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Valor da nota 1: ";
    cin  >> fNota1;

    cout << "Valor da nota 2: ";
    cin  >> fNota2;

    fMedia  =  (fNota1*0.2) + (fNota2*0.3);

    cout << "Média Ponderada = "  << fMedia;

    return 0;
}
