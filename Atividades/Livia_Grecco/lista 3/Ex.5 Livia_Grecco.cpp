/**********************************************************
- Autor:   Livia Grecco
- Descri��o: Lista 3 - Ex. 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
   int iEscolha;


    float fNum1 = 0;
    float fNum2 = 0;
    float fMedia = 0;
    float fDif = 0;
    float fProduto = 0;
    float fDivi = 0;
    float fMaior = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o primeiro n�mero: ";
    cin >> fNum1;

    cout << "Digite o segundo n�mero: ";
    cin >> fNum2;

    cout << "----------------------------------------\n";
    cout << "1 - M�dia entre os n�meros digitados";
    cout << "\n2 - Diferen�a do maior pelo menor";
    cout << "\n3 - Produto entre os n�meros digitados";
    cout << "\n4 - Divis�o do primeiro pelo segundo";
    cout << "\n----------------------------------------\n";

    cout << "Op��o:  ";
    cin >> iEscolha;

    switch (iEscolha)
{
    case 1:
    fMedia = (fNum1 + fNum2)/2;

    cout << "Valor da m�dia �: " << fMedia;
    break;

    case 2:
    if (fNum1 > fNum2)
    {
        fMaior = fNum1;
        fDif = fMaior - fNum2;

    cout << "Valor da diferen�a �: " << fDif;
    break;
    }

    else if (fNum2 > fNum1)
    {
        fMaior = fNum2;
        fDif = fMaior - fNum1;

    cout << "Valor da difern�a �: " << fDif;
    break;

    }
    case 3:
        fProduto = fNum1*fNum2;
        cout << "O resultado �:  " << fProduto;
        break;

    case 4:
        fDivi = fNum1/fNum2;
        cout << "A divis�o dos n�meros � =  " << fDivi;
        break;

   default:
   cout << " Valor inv�lido! ";

}


    getch();

    return 0;
}
