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


using namespace std;


int main()
{

    char ctrans ;
    int icont = 0;
    float fvalor = 0;
    float fsoma = 0;
    float fsoma1 = 0;
    float fsoma2 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (icont < 5)
    {
        cout << "\nTransa��o a vista = V";
        cout << "\nTransa��o a prazo = P";
        cout << "\nInsira o c�digo desejado ";
        cin >> ctrans;


        cout << "Qual o valor da transa��o? ";
        cin >> fvalor;

    if (ctrans == 'v')
    {
        fsoma = fsoma + fvalor;
    }

    else
    {
        fsoma1= fsoma1 + fvalor;
    }


        fsoma2= fsoma2 + fvalor;

        icont++;
    }


    cout << "\nO valor total das compras a vista � de " << fsoma <<" reais";
    cout << "\nO valor total das compras a prazo � de " << fsoma1 << " reais";
    cout << "\nO valor total das compras efetuadas � de " << fsoma2 << " reais";
    cout << "\nSe voc� parcelar a sua compra a prazo em 3 vezes, o valor de cada parcela ser� de " <<fsoma1 / 3 << " reais";

}
