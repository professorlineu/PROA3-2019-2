/**********************************************************
- Autor:    Bruno Henrique
- Descri��o: Area do Quadrado
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
     int lado = 0 ;
    int resu = 0 ;

    cout << " \ n �rea do Quadrado " ;

    cout << " \ n Digite um dos lados do quadrado: " ;
    cin >> lado;

    resu = lado * lado;

    cout << " \ n Uma �rea do quarado e: " << resu;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
