/**********************************************************
- Autor:   Let�cia da Silva Martins
- Descri��o: Multiplica��o de valores
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int ivalor1 = 0;
    int ivalor2 = 0;
    int ivalor3 = 0;
    int iResultado = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o primeiro valor : ";
    cin >> ivalor1;

    cout << "Digite o segundo valor : ";
    cin >> ivalor2;

    cout << "Digite o terceiro valor : ";
    cin >> ivalor3;

    iResultado = ivalor1 * ivalor2 * ivalor3 ;

    cout << "Resultado : " << iResultado;


    return 0;
}
