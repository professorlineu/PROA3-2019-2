/**********************************************************
- Autor:     Adriel Silveira
- Descri��o: calculo de conversao de peso em kg para gramas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float fpeso = 0;


    float fpesograma = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \npeso atual em kg: ";
    cin >> fpeso;

fpesograma = fpeso *1000 ;






cout << "\peso em gramas= " <<fpesograma;

getch();

    return 0;
}

