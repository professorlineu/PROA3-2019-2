/**********************************************************
- Autor:     Elbert Jean
- Descri��o: Uma loja utiliza o c�digo V para transa��o � vista e P para transa��o a prazo. Fa�a um programa que receba
o c�digo e o valor de quinze transa��es, calcule e mostre:
o valor total das compras � vista;
o valor total das compras a prazo;
o valor total das compras efetuadas; e
o valor da primeira presta��o das compras a prazo juntas, sabendo-se que ser�o pagas em tr�s vezes.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>
#include <ctype.h>


using namespace std;


int main()
{

    char ctrans;
    int icont = 0;
    float fvalor = 0;
    float fsoma = 0;
    float fsoma1 = 0;
    float fsoma2 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (icont < 5)
    {
        cout << "\nQual o valor da transa��o? ";
        cin >> fvalor;

        cout << "Transa��o a vista = V";
        cout << "\nTransa��o a prazo = P";
        cout << "\nInsira o c�digo desejado ";
        cin >> ctrans;

    if (ctrans == 'v' || ctrans == 'V')
    {
        fsoma = fsoma + fvalor;
    }

    else if ( ctrans == 'p' || ctrans == 'P')
    {
        fsoma1= fsoma1 + fvalor;
    }
    else
    {
        cout <<"Op��o Inv�lida" << endl;
    }

        fsoma2= fsoma2 + fvalor;

        icont++;
    }


    cout << "\nO valor total das compras a vista � de " << fsoma <<" reais";
    cout << "\nO valor total das compras a prazo � de " << fsoma1 << " reais";
    cout << "\nO valor total das compras efetuadas � de " << fsoma2 << " reais";
    cout << "\nSe voc� parcelar a sua compra a prazo em 3 vezes, o valor de cada parcela ser� de " <<fsoma1 / 3 << " reais";

}
