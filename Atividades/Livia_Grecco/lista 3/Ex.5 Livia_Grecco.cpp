/**********************************************************
- Autor:   Livia Grecco
- Descrição: Lista 3 - Ex. 5
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

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o primeiro número: ";
    cin >> fNum1;

    cout << "Digite o segundo número: ";
    cin >> fNum2;

    cout << "----------------------------------------\n";
    cout << "1 - Média entre os números digitados";
    cout << "\n2 - Diferença do maior pelo menor";
    cout << "\n3 - Produto entre os números digitados";
    cout << "\n4 - Divisão do primeiro pelo segundo";
    cout << "\n----------------------------------------\n";

    cout << "Opção:  ";
    cin >> iEscolha;

    switch (iEscolha)
{
    case 1:
    fMedia = (fNum1 + fNum2)/2;

    cout << "Valor da média é: " << fMedia;
    break;

    case 2:
    if (fNum1 > fNum2)
    {
        fMaior = fNum1;
        fDif = fMaior - fNum2;

    cout << "Valor da diferença é: " << fDif;
    break;
    }

    else if (fNum2 > fNum1)
    {
        fMaior = fNum2;
        fDif = fMaior - fNum1;

    cout << "Valor da difernça é: " << fDif;
    break;

    }
    case 3:
        fProduto = fNum1*fNum2;
        cout << "O resultado é:  " << fProduto;
        break;

    case 4:
        fDivi = fNum1/fNum2;
        cout << "A divisão dos números é =  " << fDivi;
        break;

   default:
   cout << " Valor inválido! ";

}


    getch();

    return 0;
}
