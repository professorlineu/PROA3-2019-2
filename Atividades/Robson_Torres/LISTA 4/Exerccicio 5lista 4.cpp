/**********************************************************
- Autor:     Robson torres
- Descri��o: LISTA 4 - EX.05
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int j = 0;
    int iResult = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (i <= 10)
    {
        cout << "\nTabuada do " << i << " : \n" << endl;

        while (j <= 10)
        {
            iResult = j * i;

            cout << j << " X " << i << " = " << iResult << endl;

            j++;
        }

        i++;
        j = 0;
    }


    return 0;
}
