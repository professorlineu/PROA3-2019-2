/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: La�o de repeti��o - Programa que receba um n�mero, calcule e mostre a tabuada desse n�mero**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int itabuada = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite um Numero: ";
    cin >> itabuada;

    while (i <= 10)
    {
        cout << itabuada << " x " << i << "=" << i * itabuada << endl;

        i = i + 1;
    } // fim do while / la�o


    return 0;
}
