/**********************************************************
- Autor:     Gerson Flores de Souza
- Descri��o: lista 2 exerc�cio 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int nota01=0;
    int nota02=0;
    int media=0;
    int total=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "digite nota 01" << endl;
    cin>> nota01;
    cout << "digite nota 02" << endl;
    cin>> nota02;

    total = nota01 + nota02 ;
    media = total / 2;


    cout <<"Media" "\n" << media;




    return 0;
}
