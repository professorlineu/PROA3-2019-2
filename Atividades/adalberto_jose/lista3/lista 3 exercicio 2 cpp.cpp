/**********************************************************
- Autor:     Adalberto José
- Descrição: Lista 3 exercicio 2
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    float fn1 = 0;
    float fn2 = 0;
    float fresultado = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "\nInsira o valor da primeira nota: ";
    cin >> fn1;

    cout << "\nInsira o valor da segunda nota :";
    cin>>fn2;

    fresultado = (fn1 + fn2 )/2;

    cout<<"\nA media das suas notas é " <<fresultado;
    if (fresultado>=7)
    {
     cout<<"\nAprovado!!!";

    }
    else if (fresultado>=3)
    {
     cout<<"\nExame!!!";
    }
     else
    {
     cout<<"\nReprovado!!!";

    }



    return 0;
}
