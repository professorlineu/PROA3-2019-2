/**********************************************************
- Autor:     Robson Torres
- Descri��o: LISTA 4 - EX.7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

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


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Indique: " << endl;

    while (i < 5)
    {
        i++;

        cout << "\nIdade da " << i << "� pessoa: ";
        cin >> iIdade;

        cout << "\nAltura da " << i << "� pessoa: ";
        cin >> fAlt;

        cout << "\nPeso da " << i << "� pessoa: ";
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
            cout << "\nN�o tem pessoas com idade superior a 50 anos! " << endl;
        }

        fMediaAlt = fAltTotal / iCont2;

        cout << "\nA M�dia da altura das pessoas com idade entre 10 � 20 anos: " << fMediaAlt << endl;

        fPorcent = ((float)iCont3 / i) * 100;

        cout << "\nA Porcentagem de pessoas com peso inferior a 40kg �: " << fPorcent << "%" << endl;


    return 0;
}
