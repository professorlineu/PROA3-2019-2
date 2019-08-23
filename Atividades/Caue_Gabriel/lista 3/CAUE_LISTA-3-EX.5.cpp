/**********************************************************
- Autor:     CAUE GABRIEL
- Descrição: LISTA 3 - EX.5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iEscolha = 0;
    float fNum1 = 0;
    float fNum2 = 0;
    float fMedia = 0;
    float fMaior = 0;
    float fResult = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "-------------------------------------------\n\n";
    cout << "1 - Média entre os números digitados\n";
    cout << "2 - Diferença do maoir pelo menor\n";
    cout << "3 - Produto entre os números digitados\n";
    cout << "4 - Divisão do primeiro pelo segundo\n\n";
    cout << "-------------------------------------------\n\n";

    cout << "Opção: ";
    cin >> iEscolha;

    switch (iEscolha)
    {
    case 1:
        cout << "\nVocê escolheu a Média entre os Números digitados!\n";
        cout << "\nDigite o 1° número: ";
        cin >> fNum1;
        cout << "\nDigite o 2° número: ";
        cin >> fNum2;

        fMedia = (fNum1 + fNum2) / 2;

        cout << "\nEsta é a media: " << fMedia << endl;
        break;

    case 2:
        cout << "\nVocê escolheu a Diferença do maior pelo menor!\n";
        cout << "\nDigite o 1° número: ";
        cin >> fNum1;
        cout << "\nDigite o 2° número: ";
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
        cout << "\n A Diferença é: " << fResult << endl;
        break;

    case 3:
        cout << "\nVocê escolheu Produto entre os numeros digitados!\n";
        cout << "\nDigite o 1° número: ";
        cin >> fNum1;
        cout << "\nDigite o 2° número: ";
        cin >> fNum2;

        fResult = fNum1 * fNum2;

        cout << "\nEste é seu Resultado: " << fResult << endl;
        break;

    case 4:
        cout << "\nVocê escolheu a Divisão do 1° pelo 2° número!\n";
        cout << "\nDigite o 1° número: ";
        cin >> fNum1;
        cout << "\nDigite o 2° número: ";
        cin >> fNum2;

        fResult = fNum1 / fNum2;

        cout << "\nEste é seu Resultado: " << fResult << endl;
        break;

    }


    return 0;
}
