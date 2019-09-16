/**********************************************************
- Autor:     Robson Torres
- Descrição: LISTA 4 - EX.7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iCont1 = 0;
    int iCont2 = 0;
    int iCont3 = 0;
    int iIdade = 0;
    float fAlt = 0; //Altura
    float fPeso = 0;
    float fMediaAlt = 0;
    float fAltTotal = 0;
    float fPorcent = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Indique: " << endl;

    while (i < 5)
    {
        i++;

        cout << "\nIdade da " << i << "° pessoa: ";
        cin >> iIdade;

        cout << "\nAltura da " << i << "° pessoa: ";
        cin >> fAlt;

        cout << "\nPeso da " << i << "° pessoa: ";
        cin >> fPeso;

        if (iIdade > 50)
        {
            iCont1++;
        }
        if (iIdade >= 10 && iIdade <= 20)
        {
            iCont2++;
            fAltTotal = fAlt * iCont2;
        }
        if (fPeso < 40)
        {
            iCont3++;
        }
    }
        if (iCont1 > 0)
        {
             cout << "\nA quantidade de pessoas com idade superior a 50 anos: " << iCont1 << endl;
        }
        else
        {
            cout << "\nNão tem pessoas com idade superior a 50 anos! " << endl;
        }

        fMediaAlt = fAltTotal / iCont2;

        cout << "\nA Média da altura das pessoas com idade entre 10 à 20 anos: " << fMediaAlt << endl;

        fPorcent = ((float)iCont3 / i) * 100;

        cout << "\nA Porcentagem de pessoas com peso inferior a 40kg é: " << fPorcent << "%" << endl;


    return 0;
}
