/**********************************************************
- Autor:     Elbert Jean
- Descrição: Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

main()
{

    float fsalario = 0;
    float faumento = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "\nQual é o seu salário? ";
    cin >> fsalario;

    if (fsalario<=300)
    {
        faumento = fsalario + (fsalario * 35/100);
        cout <<"\nParabéns, você recebeu um aumento de 35%! O seu novo salário é de " << faumento <<" reais";

    }
    else if (fsalario>300)
    {
        faumento = fsalario + (fsalario * 15/100);
        cout <<"\nParabéns, você recebeu um aumento de 15%! O seu novo salário é de " << faumento <<" reais";
    }

    getch();

    return 0;

}
