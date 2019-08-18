/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 3 - Exercício 22
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int iIdade = 0;
    float fPeso = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite a sua idade em anos: ";    // Recebe o valor da idade
    cin >> iIdade;

    cout << "Digite o seu peso em quilogramas: ";    // Recebe o valor do peso em quilogramas
    cin >> fPeso;

    if (fPeso <= 60)     //Condição até 60 quilogramas
    {
        if (iIdade < 20)
        {
            cout << "\nVocê se encaixa no grupo de risco 9.";   //Condição risco 9
        }

        else if (iIdade > 50)
        {
            cout << "\nVocê se encaixa no grupo de risco 3.";   //Condição risco 3
        }

        else
        {
            cout << "\nVocê se encaixa no grupo de risco 6.";   //Condição risco 6
        }

    }

    else if (fPeso > 90)     //Condição acima de 90 quilogramas
    {
        if (iIdade < 20)
        {
            cout << "\nVocê se encaixa no grupo de risco 7.";   //Condição risco 7
        }

        else if (iIdade > 50)
        {
            cout << "\nVocê se encaixa no grupo de risco 1.";   //Condição risco 1
        }

        else
        {
            cout << "\nVocê se encaixa no grupo de risco 4.";   //Condição risco 4
        }

    }

    else        //Condição entre 60 e até 90 quilogramas
    {
        if (iIdade < 20)
        {
            cout << "\nVocê se encaixa no grupo de risco 8.";   //Condição risco 8
        }

        else if (iIdade > 50)
        {
            cout << "\nVocê se encaixa no grupo de risco 2.";   //Condição risco 2
        }

        else
        {
            cout << "\nVocê se encaixa no grupo de risco 5.";   //Condição risco 5
        }


    }

	return 0;
}
