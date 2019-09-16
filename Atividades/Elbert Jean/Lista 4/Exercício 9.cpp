/**********************************************************
- Autor:     Elbert Jean
- Descrição: Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
a média das idades das dez pessoas;
a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de
1,90 m.
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
    int iidade = 0;
    float fpeso = 0;
    float faltura = 0;
    int icont = 0;
    int icont1 = 0;
    int icont2 = 0;
    int icont3 = 0;
    int iporcentagem = 0;
    int ifirst = 0;
    float fmedia = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    while ( icont < 5)
    {
        ifirst++;
        cout <<"Insira a idade da " << ifirst << "º pessoa ";
        cin >> iidade;
        cout <<"Insira a altura da " << ifirst << "º pessoa (exemplo : 1.75) ";
        cin >> faltura;
        cout <<"Insira o peso da " << ifirst << "º pessoa (exemplo 65.8) ";
        cin >> fpeso;

        icont++;

        if (iidade > 0)
        {
            fmedia = fmedia + iidade ;
            icont1++;
        }

        if ( fpeso > 90 && faltura < 1.50)
        {
            icont2++;
        }

        if ( iidade >= 10 && iidade <= 30 && faltura > 1.90 )
        {
            icont3++;
        }
    }

   if (icont1 > 0) // condição para pessoas com mais de 50 anos
    {
        cout <<"\nA média da idade das pessoas inseridas é de " << fmedia / icont1 << " anos " ;
        cout << endl;
    }

    if (icont2>0) // condição para pessoas com mais de 50 anos
    {
        cout << "Foram inseridas " << icont2 << " pessoas com peso superior a 90 kg e altura inferior a 1,50 metro";

    }

    iporcentagem = (((float)icont3 / icont)* 100);

    if (icont3>0) // condição para pessoas com mais de 50 anos
    {
        cout << "\nÉ de " << iporcentagem << "% a porcentagem de pessoas com idade entre 10 e 30 anos com mais de 1.90 m";
        cout << endl;

    }

    else
    {
        cout << "\nNão foi inserido pessoas com idade entre 10 e 30 anos com mais de 1.90 m";
        cout << endl ;
    }


}
