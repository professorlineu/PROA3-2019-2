/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Lista 3 - Exerc�cio 7 / acrescenta 30%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fsal = 0;
    float faju = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "\nDigite o valor de seu sal�rio:";
    cin >> fsal;

    if (fsal < 500)
{

    faju = fsal + (fsal * 30/100);


}
    else

    faju = fsal;

    cout << "\nO seu s�lario total � de:" << faju;



    return 0;
}
