/**********************************************************
- Autor:   Livia Grecco
- Descrição: Lista 3 - Ex. 6
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

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o primeiro número: ";
    cin >> fNum1;

    cout << "Digite o segundo número: ";
    cin >> fNum2;

    cout << "----------------------------------------\n";
    cout << "1 - O primeiro número elevado ao segundo.";
    cout << "\n2 - Raiz quadrada de cada um dos números.";
    cout << "\n3 - Raiz cúbica de cada um dos números.";
    cout << "\n----------------------------------------\n";

    cout << "Opção:  ";
    cin >> iEscolha;

    switch (iEscolha)
{
    case 1:

    fElev = pow(fNum1,fNum2);
    cout << "O resultado é: " << fElev;

    break;

    case 2:
    fRQ1 = sqrt(fNum1);
      cout << "Raiz quadrada do primeiro número é: " << fRQ1;

    fRQ2 = sqrt(fNum2);
      cout << "\nRaiz quadrada do segundo número é: " << fRQ2;
         break;

    case 3:
    fRC1 = cbrt(fNum1);
        cout << "Raiz cubica do primeiro número é: " << fRC1;

    fRC2 = cbrt(fNum2);
        cout << "\nRaiz cubica do segundo número é: " << fRC2;
        break;


   default:
   cout << " Valor inválido! ";

}


    getch();

    return 0;
}
