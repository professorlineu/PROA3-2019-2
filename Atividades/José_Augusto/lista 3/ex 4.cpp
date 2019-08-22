/**********************************************************
- Autor:     José Augusto
- Descrição: Lista 3 - Exercício 4 / Compara três Números
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fn1 = 0;
    float fn2 = 0;
    float fn3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "\nInsira o primeiro número:";
    cin >> fn1;

    cout << "\nInsira o segundo número:";
    cin >> fn2;

    cout << "\nInsira o terceiro número:";
    cin >> fn3;

    if (fn1>fn2 && fn1>fn3)
    {
        cout << "\nO primeiro número é o maior!!!";
    }

    else if (fn2>fn3)
    {
        cout << "\nO segundo número é o maior!!!";
    }

    else

    {
        cout << "\nO terceiro número é o maior!!!";
    }



    return 0;
}
