/**********************************************************
- Autor:     CAUE GABRIEL
- Descrição: LISTA 3 - EX.5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iEscolha = 0;
    float fNum1 = 0;
    float fNum2 = 0;
    float fResult = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "-------------------------------------------\n\n";
    cout << "1 - O Primeiro número elevado ao segundo número\n";
    cout << "2 - Raiz quadrada de cada um dos números\n";
    cout << "3 - Raiz cúbica de cada um dos números\n\n";
    cout << "-------------------------------------------\n\n";

    cout << "Opção: ";
    cin >> iEscolha;

    switch (iEscolha)
    {
    case 1:
        cout << "\nVocê escolheu O Primeiro número elevado ao segundo número!\n";
        cout << "\nDigite o 1° número: ";
        cin >> fNum1;
        cout << "\nDigite o 2° número: ";
        cin >> fNum2;

        fResult = pow(fNum1 , fNum2);

        cout << "\nSeu Resultado é: " << fResult << endl;
        break;

    case 2:
        cout << "\nVocê escolheu a Raiz quadrada de cada um dos números!\n";
        cout << "\nDigite o 1° número: ";
        cin >> fNum1;
        cout << "\nDigite o 2° número: ";
        cin >> fNum2;

        cout << "\n A Raiz quadrada do 1° número é: " << sqrt(fNum1) << endl;
        cout << "\n A Raiz quadrada do 2° número é: " << sqrt(fNum2) << endl;

        break;

    case 3:
        cout << "\nVocê escolheu Raiz cúbica de cada um dos números!\n";
        cout << "\nDigite o 1° número: ";
        cin >> fNum1;
        cout << "\nDigite o 2° número: ";
        cin >> fNum2;

        cout << "\nA Raiz cúbica do 1° número é: " << cbrt(fNum1) << endl;
        cout << "\nA Raiz cúbica do 2° número é: " << cbrt(fNum2) << endl;
        break;

    }


    return 0;
}
