/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio proposto 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fsalario = 0;
    float fsalreaj = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "O valor do salario �: ";
    cin >> fsalario;



    if (fsalario <= 300)
    {
       fsalreaj = fsalario * 1.35;
    }


    else

        {
             fsalreaj = fsalario * 1.15;

        }

        cout << "O seu novo salario �: " << fsalreaj << endl;
        return 0;

}
