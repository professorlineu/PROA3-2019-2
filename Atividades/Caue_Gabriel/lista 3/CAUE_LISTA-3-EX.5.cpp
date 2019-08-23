/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 3 - EX.5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int iEscolha = 0;
    float fNum1 = 0;
    float fNum2 = 0;
    float fMedia = 0;
    float fMaior = 0;
    float fResult = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "-------------------------------------------\n\n";
    cout << "1 - M�dia entre os n�meros digitados\n";
    cout << "2 - Diferen�a do maoir pelo menor\n";
    cout << "3 - Produto entre os n�meros digitados\n";
    cout << "4 - Divis�o do primeiro pelo segundo\n\n";
    cout << "-------------------------------------------\n\n";

    cout << "Op��o: ";
    cin >> iEscolha;

    switch (iEscolha)
    {
    case 1:
        cout << "\nVoc� escolheu a M�dia entre os N�meros digitados!\n";
        cout << "\nDigite o 1� n�mero: ";
        cin >> fNum1;
        cout << "\nDigite o 2� n�mero: ";
        cin >> fNum2;

        fMedia = (fNum1 + fNum2) / 2;

        cout << "\nEsta � a media: " << fMedia << endl;
        break;

    case 2:
        cout << "\nVoc� escolheu a Diferen�a do maior pelo menor!\n";
        cout << "\nDigite o 1� n�mero: ";
        cin >> fNum1;
        cout << "\nDigite o 2� n�mero: ";
        cin >> fNum2;

        if (fNum1 >= fNum2)
        {
            fMaior = fNum1;
            fResult = fMaior - fNum2;
        }
        else
        {
            fMaior = fNum2;
            fResult = fMaior - fNum1;
        }
        cout << "\n A Diferen�a �: " << fResult << endl;
        break;

    case 3:
        cout << "\nVoc� escolheu Produto entre os numeros digitados!\n";
        cout << "\nDigite o 1� n�mero: ";
        cin >> fNum1;
        cout << "\nDigite o 2� n�mero: ";
        cin >> fNum2;

        fResult = fNum1 * fNum2;

        cout << "\nEste � seu Resultado: " << fResult << endl;
        break;

    case 4:
        cout << "\nVoc� escolheu a Divis�o do 1� pelo 2� n�mero!\n";
        cout << "\nDigite o 1� n�mero: ";
        cin >> fNum1;
        cout << "\nDigite o 2� n�mero: ";
        cin >> fNum2;

        fResult = fNum1 / fNum2;

        cout << "\nEste � seu Resultado: " << fResult << endl;
        break;

    }


    return 0;
}
