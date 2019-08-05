/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Comando \t - nova linha
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

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
