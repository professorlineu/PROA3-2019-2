/**********************************************************
- Autor:     Gerson Flores de Souza
- Descri��o: lista 3 exer.10
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
