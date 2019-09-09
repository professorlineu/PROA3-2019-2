#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int iValor = 0;

    do
    {
        cout << "Digite {1 - 2 - 3}: ";
        cin >> iValor;

        if (iValor <= 1 or iValor >= 3)
        {
            cout << "Valor inválido! Tente novamente!" << endl;
        }

    } while (iValor <= 1 or iValor >= 3);
}
