/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 3 - Exercício 19
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float fAltura = 0, fPeso = 0;
    int iSex = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite a sua altura: ";    // Recebe o valor da altura
    cin >> fAltura;

    cout << "----------------\n\n";
    cout << "1 - Masculino.\n\n";
    cout << "2 - Feminino.\n\n";
    cout << "----------------\n\n";
    cout << "\nDigite o número correspondente ao seu sexo: ";    // Recebe o valor do sexo
    cin >> iSex;

    switch (iSex)
    {
        case 1:             //Sexo masculino
            fPeso = (72.7 * fAltura) - 58;
            cout << "\nSeu peso ideal é de: " << fPeso;
            break;
        case 2:             //Sexo feminino
            fPeso = (62.1 * fAltura) - 44.7;
            cout << "\nSeu peso ideal é de: " << fPeso;
            break;
        default:
            cout << "\nOpção digitada inválida.";
            ;
    }

	return 0;
}
