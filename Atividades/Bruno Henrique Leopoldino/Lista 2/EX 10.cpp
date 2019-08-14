/**********************************************************
- Autor:    Bruno Henrique
- Descrição: Area do Quadrado
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
     int lado = 0 ;
    int resu = 0 ;

    cout << " \ n Área do Quadrado " ;

    cout << " \ n Digite um dos lados do quadrado: " ;
    cin >> lado;

    resu = lado * lado;

    cout << " \ n Uma área do quarado e: " << resu;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
