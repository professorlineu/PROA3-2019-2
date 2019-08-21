/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exercicio proposto 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fsalario = 0;
    float fsalreaj = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "O valor do salario é: ";
    cin >> fsalario;



    if (fsalario <= 300)
    {
       fsalreaj = fsalario * 1.35;
    }


    else

        {
             fsalreaj = fsalario * 1.15;

        }

        cout << "O seu novo salario é: " << fsalreaj << endl;
        return 0;

}
