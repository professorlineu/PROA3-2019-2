/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Subtra��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int n1= 0;
    int n2=0;
    int sub=0;

    cin >> n1;
    cin >> n2;


    sub = n1 - n2;

    cout << "\n =" << sub ;
    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
