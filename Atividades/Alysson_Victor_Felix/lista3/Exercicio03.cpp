/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio proposto 3
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
    float fnummenor = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "O valor do primeiro numero �: ";
        cin >> fnum1;

    cout << "O valor do segundo numero �: ";
    cin >> fnum2;



    if (fnum1 > fnum2)
    {
       fnummenor = fnum2;

       cout << "O numero menor �: " << fnummenor;
    }


    else

        {
             fnummenor = fnum1;

           cout << " o numero menor �: " << fnummenor;

        }


        return 0;

}
