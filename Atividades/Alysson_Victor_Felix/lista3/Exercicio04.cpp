/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio proposto 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnum1 = 0;
    float fnum2 = 0;
    float fnum3 = 0;
    float fnummaior = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "O valor do primeiro numero �: ";
        cin >> fnum1;

    cout << "O valor do segundo numero �: ";
    cin >> fnum2;

    cout << "O valor do terceiro numero �: ";
    cin >> fnum3;


    if (fnum1 >= fnum2)
    {
       fnummaior = fnum1;
    }


    else

        {
             fnummaior = fnum2;

        }

    if (fnum3 >= fnummaior)

    {
        fnummaior = fnum3;
    }

    cout << "O numero maior �: " << fnummaior << endl;
        return 0;

}
