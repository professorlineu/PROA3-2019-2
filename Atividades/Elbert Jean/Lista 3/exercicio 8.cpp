/**********************************************************
- Autor:     Elbert Jean
- Descri��o: Fa�a um programa para calcular e mostrar o sal�rio reajustado de um funcion�rio. O percentual de aumento
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

    cout << "\nQual � o seu sal�rio? ";
    cin >> fsalario;

    if (fsalario<=300)
    {
        faumento = fsalario + (fsalario * 35/100);
        cout <<"\nParab�ns, voc� recebeu um aumento de 35%! O seu novo sal�rio � de " << faumento <<" reais";

    }
    else if (fsalario>300)
    {
        faumento = fsalario + (fsalario * 15/100);
        cout <<"\nParab�ns, voc� recebeu um aumento de 15%! O seu novo sal�rio � de " << faumento <<" reais";
    }

    getch();

    return 0;

}
