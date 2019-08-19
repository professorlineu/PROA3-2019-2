/**********************************************************
- Autor:     Adriel Silveira
- Descrição: calculo de media ponderada de nota final
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fnum1 = 0;
    float fnum2 = 0;


    float fmenor = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \ninsira um numero qualquer 1: ";
    cin >> fnum1;

cout << " \ninsira um numero qualquer 2: ";
    cin >> fnum2;



if (fnum1<fnum2  ) // CONDIÇÃO "CE"
{
    cout << "o numero 1 e o menor" ;

}

else // CONDIÇÃO "SENAO"

{ cout << "\o numero 2 e o menor " ;


}
getch();

    return 0;
}
