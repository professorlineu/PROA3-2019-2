/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: bonifica��o 4% do sal�rio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float sal=0;
    float salreceber=0;
    float grat=0;

    cout << "\nSal�rio do funcion�rio:";

    cin >> sal;

    grat = sal* 4/100;

    salreceber = sal + grat;

    cout << "\nSal�rio a receber=" << salreceber;

    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
