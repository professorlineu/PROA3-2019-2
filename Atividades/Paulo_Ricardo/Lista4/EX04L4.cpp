/**********************************************************
- Autor:     Paulo Ricardo da Silva
- Descri��o: Exerc�cio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int ivalor = 0;
    int imult = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "\n Insira o valor:";
    cin >> ivalor;

    while (i <= 10)
    {
        cout << ivalor << "x" <<i<< " = " << imult << endl;

        i = i + 1;

        imult = i * ivalor;
    } // fim do while / la�o


    return 0;
}
