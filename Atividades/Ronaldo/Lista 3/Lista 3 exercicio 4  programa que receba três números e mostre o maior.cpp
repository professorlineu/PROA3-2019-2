/**********************************************************
- Autor:     Ronaldo Rodrigue
- Descri��o: calculo de media ponderada de nota final
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
    float fnum3 = 0;

    float fmenor = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \ninsira um numero qualquer 1: ";
    cin >> fnum1;

cout << " \ninsira um numero qualquer 2: ";
    cin >> fnum2;

cout << " \ninsira um numero qualquer 3: ";
    cin >> fnum3;



if ( fnum1 > fnum2 && fnum1> fnum3  ) // CONDI��O "CE"
{
    cout << "o numero 1 e o maior" ;

}

else if ( fnum2 > fnum3 )
{
    cout << "\n numero 2 e o maior " ;
}

else // CONDI��O "SENAO"

{ cout << "\o numero 3 e o maior " ;


}
getch();

    return 0;
}
