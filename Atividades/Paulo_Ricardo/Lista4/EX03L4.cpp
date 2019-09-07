/**********************************************************
- Autor:     Paulo Ricardo
- Descrição: Exercício 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int iIdade = 0;
    int icont = 0;
    int ipor = 0;
    int icont1 = 0;
    int ipor1 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    while (i < 8)
    {
        cout << "\nIndique a idade:";
        cin >> iIdade;

        if (iIdade <= 15)
        {
            cout << "\nEstá na 1ª faixa etária!";
            icont++;
        }

        else if (iIdade <=30)
        {
            cout << "\nEstá na 2ª faixa etária!";
        }

        else if (iIdade <=45)
        {
            cout << "\nEstá na 3ª faixa etária!";
        }

        else if (iIdade <=60)
        {
            cout << "\nEstá na 4ª faixa etária!";
        }


        else
        {
            cout << "\nEstá na 5ª faixa etária!";

             icont1++;
        }

        i++; // i = i + 1

    }
    ipor = ( (float)icont / i ) * 100;
    ipor1 = ( (float)icont1 / i ) * 100;
    cout << "\nA porcentagem de pessoas na 1ª faixa etária é:" << ipor << "%";
    cout << "\nA porcentagem de pessoas na 5ª faixa etária é:" << ipor1 << "%";


    return 0;
}
