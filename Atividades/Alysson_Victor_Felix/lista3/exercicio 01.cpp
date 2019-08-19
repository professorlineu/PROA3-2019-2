/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exercicio Proposto 01
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnota1 = 0;
    float fnota2 = 0;
    float fnota3 = 0;
    float fnota4 = 0;
    float fmedia = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "O valor da nota 1 é: ";
    cin >> fnota1;

    cout << "O valor da nota 2 é: ";
    cin >> fnota2;

    cout << "O valor da nota 3 é: ";
    cin >> fnota3;

    cout << "O valor da nota 4 é: ";
    cin >> fnota4;

    fmedia = ( fnota1 + fnota2 + fnota3 + fnota4) / 4;

   if(fmedia >= 7)
    {
      cout << "Aprovado com media: " << fmedia;
    }


    else
    {
       cout << "Reprovado com media: " << fmedia;
    }

    return 0;
}
