/**********************************************************
- Autor:     Bruno Henrique
- Descri��o: Exerc�cio 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int peso = 0 ;
    int resu1 = 0 ;
    int resu2 = 0 ;



    cout << " \ n Digite seu peso: " ;
    cin >> peso;

    resu1 = peso + (peso * 0,15 );


    cout << " \ n Engordou 15%: " << resu1;

    resu2 = peso - (peso * 0,20 );


    cout << " \ n Emagreceu 20%: " << resu2;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
