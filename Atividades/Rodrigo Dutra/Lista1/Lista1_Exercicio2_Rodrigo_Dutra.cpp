/**********************************************************
- Autor:     Rodrigo D.SILVA
- Descri��o: Sauda��o na tela
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h> // Nesta biblioteca temos o comando getch
using namespace std;

int main()
{
    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa


    cout << "AULA DE AUTOMA��O!"; // o comando cout imprimi uma mensagem na tela.


    return 0;
}
