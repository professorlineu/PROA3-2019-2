/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Fa�a um programa que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    //Configura��o da tela de sa�da
    int n1=0;
    int n2=0;
    int resu=0;

    cout << "\nDivisao";

    cout << "\nDigite um numero:";
    cin >> n1;

    cout << "\nDigite um numero que n�o seja 0:";
    cin >> n2;

    resu = n1/n2;

    cout << "\n = " << resu;

    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
