/**********************************************************
- Autor:     Elbert Jean
- Descrição: Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
o valor total das compras à vista;
o valor total das compras a prazo;
o valor total das compras efetuadas; e
o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.
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
        cout << "\nTransação a vista = V";
        cout << "\nTransação a prazo = P";
        cout << "\nInsira o código desejado ";
        cin >> ctrans;


        cout << "Qual o valor da transação? ";
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


    cout << "\nO valor total das compras a vista é de " << fsoma <<" reais";
    cout << "\nO valor total das compras a prazo é de " << fsoma1 << " reais";
    cout << "\nO valor total das compras efetuadas é de " << fsoma2 << " reais";
    cout << "\nSe você parcelar a sua compra a prazo em 3 vezes, o valor de cada parcela será de " <<fsoma1 / 3 << " reais";

}
