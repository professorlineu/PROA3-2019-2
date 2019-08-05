/**********************************************************
- Autor:     Cauê Gabriel
- Descrição: Comando \t - nova linha
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
    // \t da um tab ( espaço )

    cout << "\t10\t20\t30" << endl;
    cout << "\t40\t50\t60" << endl;
    cout << "\t70\t80\t90\n" << endl;


    getch(); // Pausa o programa

    return 0;
}
