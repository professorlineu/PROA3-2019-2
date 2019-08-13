/**********************************************************
- Autor:     Adriel Silveira
- Descrição: Calculo da area do trapezio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fbasemaior = 0;


    float fbasemenor = 0;

    float faltura = 0 ;

    float fresult = 0 ;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \nbase maior: ";
    cin >> fbasemaior;

    cout << " \nbase mmenor: ";
    cin >> fbasemenor;

    cout << " \naltura: ";
    cin >> faltura;

    fresult = (((fbasemaior + fbasemenor)*faltura)/2) ;



    cout << "\n area do trapezio " <<fresult;

    getch();

    return 0;
}

