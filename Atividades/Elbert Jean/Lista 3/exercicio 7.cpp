/**********************************************************
- Autor:     Elbert Jean
- Descri��o: Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00. Fa�a um
programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio reajustado ou uma mensagem, caso
ele n�o tenha direito ao aumento.
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

    if (fsalario<500)
    {
        faumento = fsalario + (fsalario * 30/100);
        cout <<"\nParab�ns, voc� merece um aumento! O seu novo sal�rio � de " << faumento;

    }
    else if (fsalario>=500)
    {
        cout <<"\nInfelizmente voc� n�o direito a um aumento! ";
    }

    getch();

    return 0;

}
