/**********************************************************
- Autor:     Elbert Jean
- Descrição: Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos;
■■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>


using namespace std;

int main()
{
    int i = 0;
    int ii = 0;
    int iidade = 0; //Declaração de variáveis
    float faltura = 0; //Declaração de variáveis
    float fpeso = 0; //Declaração de variáveis

    int icont = 0;
    int icont1 = 0;
    int icont2 = 0;
    float fsoma = 0;
    int iporcentagem = 0;

    setlocale(LC_ALL,""); //Configuração da tela de saída
    system("color F1"); // limpa a tela

    while (i < 2)

    {
        ii++;

        cout <<"\nQual a idade da " << ii << "º pessoa? ";
        cin >> iidade;
        cout <<"\nQual a altura da " << ii << "º pessoa? (exemplo : 1.78) ";
        cin >> faltura;
        cout <<"\nQual o peso da " << ii << "º pessoa? (exemplo : 63.5) ";
        cin >> fpeso;

        i++;


        if (iidade >50)
        {
            icont++;
        }

        else if (iidade >10 && iidade <20)
        {
            fsoma = fsoma + faltura;
            icont1++;
        }
        if (fpeso < 40)
        {
            icont2++;
        }

    }
    if (icont>0) // condição para pessoas com mais de 50 anos
    {
        cout <<"\nPessoas com mais de 50 anos : " << icont;

    }
    else // condição para pessoas com mais de 50 anos
    {
        cout << "\nNão foi inserido pessoas com mais de 50 anos ";
    }

    if (icont1>0) // condição ára pessoas com idade entre 10 e 20 anos
    {
        cout <<"\nA média das pessoas com idade entre 10 e 20 anos é de " << fsoma/icont1;

    }
    else // condição ára pessoas com idade entre 10 e 20 anos
    {
        cout << "\nNão foi inserido pessoas com idade entre 10 e 20 anos";
    }

    iporcentagem = (((float)icont2 / i)* 100);

    if (icont2>0) // a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
    {
        cout <<"\nA porcentagem de pessoas com peso inferior a 40 kg é de " << iporcentagem << "%";

    }
    else // a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
    {
        cout << "\nNão foi inserido pessoas com peso inferior a 40kg";
    }


    return 0;
}




