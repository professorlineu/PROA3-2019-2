/**********************************************************
- Autor:     Gerson Flores de Souza
- Descri��o: lista 3 exer.03
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int num01 = 0;
    int num02 = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o 1� N�mero: ";
    cin >> num01;

    cout << "\nDigite o 2� N�mero: ";
    cin >> num02;

    if (num01 > num02)
    {
        cout << "\n<2� N�mero � o menor>\n"<<  num02;
    }
    else
    {
        cout << "\n<1� N�mero � o menor>\n"<< num01 << endl;
    }



    return 0;
}
