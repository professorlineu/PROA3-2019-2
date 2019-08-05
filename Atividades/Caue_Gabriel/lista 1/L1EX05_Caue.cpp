/**********************************************************
- Autor:     Cauê Gabriel
- Descrição: Comando \n - pula uma linha
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h> // Biblioteca que executa o comando getch

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "\tAula de Automação\n";

    getch(); // Pausa o programa

    return 0;
}
