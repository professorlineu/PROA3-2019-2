/**********************************************************
- Autor:   Livia Grecco
- Descri��o: Lista 3 - Ex. 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
   int iEscolha;


    float fNum1 = 0;
    float fNum2 = 0;
    float fElev = 0;
    float fRQ1 = 0;
    float fRQ2 = 0;
    float fRC1 = 0;
    float fRC2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o primeiro n�mero: ";
    cin >> fNum1;

    cout << "Digite o segundo n�mero: ";
    cin >> fNum2;

    cout << "----------------------------------------\n";
    cout << "1 - O primeiro n�mero elevado ao segundo.";
    cout << "\n2 - Raiz quadrada de cada um dos n�meros.";
    cout << "\n3 - Raiz c�bica de cada um dos n�meros.";
    cout << "\n----------------------------------------\n";

    cout << "Op��o:  ";
    cin >> iEscolha;

    switch (iEscolha)
{
    case 1:

    fElev = pow(fNum1,fNum2);
    cout << "O resultado �: " << fElev;

    break;

    case 2:
    fRQ1 = sqrt(fNum1);
      cout << "Raiz quadrada do primeiro n�mero �: " << fRQ1;

    fRQ2 = sqrt(fNum2);
      cout << "\nRaiz quadrada do segundo n�mero �: " << fRQ2;
         break;

    case 3:
    fRC1 = cbrt(fNum1);
        cout << "Raiz cubica do primeiro n�mero �: " << fRC1;

    fRC2 = cbrt(fNum2);
        cout << "\nRaiz cubica do segundo n�mero �: " << fRC2;
        break;


   default:
   cout << " Valor inv�lido! ";

}


    getch();

    return 0;
}
