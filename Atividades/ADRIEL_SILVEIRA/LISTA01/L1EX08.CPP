/**********************************************************
- Autor:     Lineu Lima
- Descrição: Comando endl - nova linha
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "         *" << endl;
    cout << "        * *" << endl;
    cout << "       *   *" << endl;
    cout << "      *     *" << endl;
    cout << "     *       *" << endl;
    cout << "    *         *" << endl;
    cout << "   *           *" << endl;
    cout << "  *             *" << endl;
    cout << " *               *" << endl;
    cout << "*******************" << endl;
    cout << "        ****" << endl;
    cout << "        ****" << endl;
    cout << "        ****" << endl;



    getch();
    return 0;
}
