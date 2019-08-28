/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 4 - Exercício 07
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int i = 0;
    int iIdade = 0;
    float fAltura = 0, fPeso = 0;
    float fAlturaTotal02 = 0;
    float fAlturaMed02 = 0;
    int iCont01 = 0, iCont02 = 0;
    float fCont03 = 0;
    float fPorcent03 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (i < 5)
    {
        cout << "\nDigite a idade em anos: ";    // Recebe o valor da idade
        cin >> iIdade;

        cout << "Digite a altura em metros: ";    // Recebe o valor da altura
        cin >> fAltura;

        cout << "Digite o peso em quilogramas: ";    // Recebe o valor do peso
        cin >> fPeso;

        i++;

        if (iIdade > 50)
        {
            iCont01++;
        }

        if (iIdade >= 10 && iIdade <= 20)
        {
            iCont02++;
            fAlturaTotal02 += fAltura;
        }

        if (fPeso < 40)
        {
            fCont03++;
        }

    } // Fim do while

    cout << "A quantidade de pessoas com idade superior a 50 anos: " << iCont01 << endl;

    fAlturaMed02 = fAlturaTotal02/iCont02;
    cout << "A média das alturas das pessoas com idade entre 10 e 20 anos: " << fAlturaMed02 << endl;

    fPorcent03 = (fCont03/i) * 100;
    cout << "A porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas: " << fPorcent03 << "%" << endl;

	return 0;
}
