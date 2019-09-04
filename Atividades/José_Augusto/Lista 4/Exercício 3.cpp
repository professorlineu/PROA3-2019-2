/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Lista 4 - ex 3 / Separa faixa et�ria
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int iIdade = 0;
    int icont = 0;
    int ipor = 0;
    int icont2 = 0;
    int ipor2 = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
     while (i < 8)
    {
        cout << "\nIndique a idade:";
        cin >> iIdade;

        if (iIdade <= 15)
        {
            cout << "\nEst� na 1� faixa et�ria!";
            icont++;
        }

        else if (iIdade <=30)
        {
            cout << "\nEst� na 2� faixa et�ria!";
        }

        else if (iIdade <=45)
        {
            cout << "\nEst� na 3� faixa et�ria!";
        }

        else if (iIdade <=60)
        {
            cout << "\nEst� na 4� faixa et�ria!";
        }


        else
        {
            cout << "\nEst� na 5� faixa et�ria!";

             icont2++;
        }

        i++; // i = i + 1

    }
    ipor = ( (float)icont / i ) * 100;
    ipor2 = ( (float)icont2 / i ) * 100;
    cout << "\nA porcentagem de pessoas na 1� faixa et�ria �:" << ipor;
    cout << "\nA porcentagem de pessoas na 5� faixa et�ria �:" << ipor2;

    return 0;
}
