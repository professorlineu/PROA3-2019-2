/**********************************************************
- Autor:     Seu nome
- Descri��o: Breve descri��o do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int lado=0;
    int resu=0;

    cout << "\nArea do quadrado";

    cout << "\nDigite um dos lados do quadrado:";
    cin >> lado;

    resu = lado * lado;

    cout << "\nA area do quarado e:" << resu;

    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
