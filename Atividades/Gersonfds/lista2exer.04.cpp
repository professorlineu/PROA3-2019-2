/**********************************************************
- Autor:     Gerson Flores de Souza
- Descrição: lista 2 exercício 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int nota01=0;
    int nota02=0;
    int media=0;
    int total=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite nota 01" << endl;
    cin>> nota01;
    cout << "digite nota 02" << endl;
    cin>> nota02;

    total = nota01 + nota02 ;
    media = total / 2;


    cout <<"Media" "\n" << media;




    return 0;
}
