/**********************************************************
- Autor:     Adriel Silveira
- Descrição: calculo de emagrecimento ou aumento de peso
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fpeso = 0;

    float fgordo = 0;

    float fmagro = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \npeso atual: ";
    cin >> fpeso;

fgordo = fpeso +(fpeso*0.15) ;
fmagro = fpeso -(fpeso*0.2) ;





cout << "\nse engordar 15% = " <<fgordo;
cout << "\nse emagrecer 20% = " <<fmagro;

getch();

    return 0;
}

