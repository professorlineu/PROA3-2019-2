/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: La�o de repeti��o/Tabuada
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

     cout << "Digite o valor desejado: ";
     cin  >> ivalor ;

    //C�digo do programa
    while (i <11)
    {
        imult = i * ivalor;
        cout << ivalor << " X " << i << " = " << imult << endl;

        i = i + 1;








    } // fim do while / la�o


    return 0;
}
