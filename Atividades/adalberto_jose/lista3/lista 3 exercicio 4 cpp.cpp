/**********************************************************
- Autor:     Adalberto José
- Descrição: Lista 3 exercicio 4
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
    float fn3 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "\nInsira o primeiro valor: ";
    cin >> fn1;

    cout << "\nInsira o segundo valor :";
    cin>>fn2;

    cout<<"\nInsira o terceiro valor :";
    cin>>fn3;

    if (fn1>fn2&&fn1>fn3)
    {
     cout<<"\nO primeiro o valor é maior: ";
    }

    else if (fn2>fn3)
    {
     cout<<"\nO segundo valor é maior: ";


    }
    else
       {



     cout<<"\nO terceiro valor é maior: ";

    }











    return 0;
}
