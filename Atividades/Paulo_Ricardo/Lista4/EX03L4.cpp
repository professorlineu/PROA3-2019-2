/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Exerc�cio 3
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
    int icont1 = 0;
    int ipor1 = 0;

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

             icont1++;
        }

        i++; // i = i + 1

    }
    ipor = ( (float)icont / i ) * 100;
    ipor1 = ( (float)icont1 / i ) * 100;
    cout << "\nA porcentagem de pessoas na 1� faixa et�ria �:" << ipor << "%";
    cout << "\nA porcentagem de pessoas na 5� faixa et�ria �:" << ipor1 << "%";


    return 0;
}
