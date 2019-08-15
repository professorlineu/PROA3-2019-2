/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 3 - Exercício 14
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float  fSalario = 0, fNovoSalario = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite o seu salário: ";    // Recebe o valor do salário
    cin >> fSalario;


    if (fSalario > 300)     //Condição para o salário maior que 300
    {

        if (fSalario > 500)     //Condição para o salário maior que 500
        {

            if (fSalario > 700)     //Condição para o salário maior que 700
            {

                if (fSalario > 800)     //Condição para o salário maior que 800
                {

                    if (fSalario > 1000)     //Condição para o salário maior que 1000
                    {
                    fNovoSalario = fSalario * (1 + 0.05);
                    cout << "\nSeu novo salário é de: " << fNovoSalario;
                    }

                    else        //Condição para o salário menor ou igual a 1000
                    {
                    fNovoSalario = fSalario * (1 + 0.1);
                    cout << "\nSeu novo salário é de: " << fNovoSalario;
                    }

                }

                else        //Condição para o salário menor ou igual a 800
                {
                fNovoSalario = fSalario * (1 + 0.2);
                cout << "\nSeu novo salário é de: " << fNovoSalario;
                }

            }

            else        //Condição para o salário menor ou igual a 700
            {
            fNovoSalario = fSalario * (1 + 0.3);
            cout << "\nSeu novo salário é de: " << fNovoSalario;
            }

        }


        else        //Condição para o salário menor ou igual a 500
        {
        fNovoSalario = fSalario * (1 + 0.4);
        cout << "\nSeu novo salário é de: " << fNovoSalario;
        }

    }

    else        //Condição para o salário menor ou igual a 300
    {
        fNovoSalario = fSalario * (1 + 0.5);
        cout << "\nSeu novo salário é de: " << fNovoSalario;
    }

	return 0;
}
