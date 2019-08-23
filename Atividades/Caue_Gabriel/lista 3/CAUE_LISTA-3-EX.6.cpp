/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 3 - EX.5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int iEscolha = 0;
    float fNum1 = 0;
    float fNum2 = 0;
    float fResult = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "-------------------------------------------\n\n";
    cout << "1 - O Primeiro n�mero elevado ao segundo n�mero\n";
    cout << "2 - Raiz quadrada de cada um dos n�meros\n";
    cout << "3 - Raiz c�bica de cada um dos n�meros\n\n";
    cout << "-------------------------------------------\n\n";

    cout << "Op��o: ";
    cin >> iEscolha;

    switch (iEscolha)
    {
    case 1:
        cout << "\nVoc� escolheu O Primeiro n�mero elevado ao segundo n�mero!\n";
        cout << "\nDigite o 1� n�mero: ";
        cin >> fNum1;
        cout << "\nDigite o 2� n�mero: ";
        cin >> fNum2;

        fResult = pow(fNum1 , fNum2);

        cout << "\nSeu Resultado �: " << fResult << endl;
        break;

    case 2:
        cout << "\nVoc� escolheu a Raiz quadrada de cada um dos n�meros!\n";
        cout << "\nDigite o 1� n�mero: ";
        cin >> fNum1;
        cout << "\nDigite o 2� n�mero: ";
        cin >> fNum2;

        cout << "\n A Raiz quadrada do 1� n�mero �: " << sqrt(fNum1) << endl;
        cout << "\n A Raiz quadrada do 2� n�mero �: " << sqrt(fNum2) << endl;

        break;

    case 3:
        cout << "\nVoc� escolheu Raiz c�bica de cada um dos n�meros!\n";
        cout << "\nDigite o 1� n�mero: ";
        cin >> fNum1;
        cout << "\nDigite o 2� n�mero: ";
        cin >> fNum2;

        cout << "\nA Raiz c�bica do 1� n�mero �: " << cbrt(fNum1) << endl;
        cout << "\nA Raiz c�bica do 2� n�mero �: " << cbrt(fNum2) << endl;
        break;

    }


    return 0;
}
