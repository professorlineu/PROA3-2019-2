/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: Programa que receba dois n�meros e mostre o menor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float fnum1 = 0;
    float fnum2 = 0;


    float fmenor = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \nInsira um numero qualquer 1: ";
    cin >> fnum1;

cout << " \nInsira um numero qualquer 2: ";
    cin >> fnum2;



if (fnum1<fnum2  ) // CONDI��O "CE"
{
    cout << "o numero 1 e o menor" ;

}

else // CONDI��O "SENAO"

{ cout << "\o numero 2 e o menor " ;


}
getch();

    return 0;
}
