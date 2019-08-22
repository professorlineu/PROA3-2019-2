/**********************************************************
- Autor:     José Augusto
- Descrição: Lista 3 - Exercício 5 / Menu switch!!
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iescolha = 0;
    float fn1 = 0;
    float fn2 = 0;
    float fmedia = 0;
    float fmaior = 0;
    float fresult = 0;
    float fmult = 0;
    float fdiv = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "\nDigite um número:";
    cin >> fn1;

    cout << "\nDigite o segundo número:";
    cin >> fn2;

    cout <<"___________________________________________\n\n";
    cout <<"1 - Média entre o números digitados\n";
    cout <<"2 - Diferença do maior pelo menor\n";
    cout <<"3 - Produto entre os números digitados\n";
    cout <<"4 - Divisão do primeiro pelo segundo\n";
    cout <<"___________________________________________\n\n";

    cout << "\nOpção:";
    cin >> iescolha;

    switch (iescolha)
    {
    case 1:

        fmedia = (fn1 + fn2)/2;

        cout << "\nA média entre os números é de:" << fmedia;
        break;

    case 2:
        if (fn1 > fn2)
        {

            fmaior = fn1;
            fresult = fmaior - fn2;

            cout << "\nO resultado é:" << fresult;
            break;
        }
        else if (fn1 < fn2)

            fmaior = fn2;
        fresult = fmaior - fn1;

        cout << "\nO resultado é:" << fresult;
        break;

    case 3:

        fmult = fn1 * fn2;

        cout << "\nO resultado é:" << fmult;
        break;

    case 4:

        fdiv = fn1 / fn2;

        cout << "\nO resultado é:" << fdiv;
        break;

    default:

        cout << "\nERRO!!! Número invalido!!!";

    }


    return 0;
}
