/**********************************************************
- Autor:     Clayton C Ribeiro
- Descri��o: Comando \t - nova linha
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "      *      \n";
    cout << "     * *     \n";
    cout << "    *   *    \n";
    cout << "   *     *   \n";
    cout << "  *       *  \n";
    cout << " *         * \n";
    cout << "*************\n";
    cout << "     ***     \n";
    cout << "     ***     \n";
    cout << "     ***     " << endl;

    return 0;
}
