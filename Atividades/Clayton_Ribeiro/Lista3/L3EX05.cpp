/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 3 - Exercício 05
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int iOperacao = 0;
    float fNum1 = 0, fNum2 = 0, fNum3 = 0;
    double dMedia = 0, dDiferen = 0, dMaior = 0, dProd = 0, dDiv = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite o primeiro número: ";    // Recebe o valor do primeiro número
    cin >> fNum1;

    cout << "\nDigite o segundo número: ";    // Recebe o valor do segundo número
    cin >> fNum2;

    cout << "\nNúm:\tLista de operações matemáticas: ";
    cout << "\n1\tMédia entre os números digitados.";
    cout << "\n2\tDiferença do maior pelo menor.";
    cout << "\n3\tProduto entre os números digitados.";
    cout << "\n4\tDivisão do primeiro pelo segundo.";
    cout << "\nDigite o número correspondente a operação deseja realizar: ";    // Recebe o valor da operação
    cin >> iOperacao;

    if (iOperacao == 1)        //Calcula a média entre os números digitados
    {
        dMedia = (fNum1 + fNum2) / 2;
        cout << "\nA média dos números é: " << dMedia;
    }

    else if (iOperacao == 2)        //Calcula a diferença do maior pelo menor
    {
        if (fNum1 >= fNum2)
        {
            dMaior = fNum1;
            dDiferen = dMaior - fNum2;
            cout << "\nA diferença do maior pelo menor é: " << dDiferen;
        }

        else
        {
            dMaior = fNum2;
            dDiferen = dMaior - fNum1;
            cout << "\nA diferença do maior pelo menor é: " << dDiferen;
        }

    }

    else if (iOperacao == 3)        //Calcula o produto entre os números digitados
    {
        dProd = fNum1 * fNum2;
        cout << "\nA produto dos números é: " << dProd;
    }

    else if (iOperacao == 4)        //Calcula a divisão do primeiro pelo segundo
    {
        dDiv = fNum1 / fNum2;
        cout << "\nA divisão do primeiro pelo segundo número é: " << dDiv;
    }


    else
    {
        cout << "\nNúmero digitado inválido.";
    }

	return 0;
}
