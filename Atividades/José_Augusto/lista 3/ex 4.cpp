/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Lista 3 - Exerc�cio 4 / Compara tr�s N�meros
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fn1 = 0;
    float fn2 = 0;
    float fn3 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "\nInsira o primeiro n�mero:";
    cin >> fn1;

    cout << "\nInsira o segundo n�mero:";
    cin >> fn2;

    cout << "\nInsira o terceiro n�mero:";
    cin >> fn3;

    if (fn1>fn2 && fn1>fn3)
    {
        cout << "\nO primeiro n�mero � o maior!!!";
    }

    else if (fn2>fn3)
    {
        cout << "\nO segundo n�mero � o maior!!!";
    }

    else

    {
        cout << "\nO terceiro n�mero � o maior!!!";
    }



    return 0;
}
