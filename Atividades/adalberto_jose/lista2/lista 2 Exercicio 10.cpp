/**********************************************************
- Autor:     Adalberto Moura
- Descrição: Lista2 Exercicio 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float f_lado = 0;
    float f_area = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout<<"Digite o lado do quadrado ;"; // Recebe o valor do quadrado
    cin>> f_lado;

    f_area = f_lado * f_lado ; // Calcule o valor da área do quadrado
     cout << "\ n da area do quadrado é :"<<f_area;


    return 0;
}
