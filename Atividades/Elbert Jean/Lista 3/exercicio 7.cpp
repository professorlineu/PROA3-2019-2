/**********************************************************
- Autor:     Elbert Jean
- Descrição: Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.
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

    if (fsalario<500)
    {
        faumento = fsalario + (fsalario * 30/100);
        cout <<"\nParabéns, você merece um aumento! O seu novo salário é de " << faumento;

    }
    else if (fsalario>=500)
    {
        cout <<"\nInfelizmente você não direito a um aumento! ";
    }

    getch();

    return 0;

}
