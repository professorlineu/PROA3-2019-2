/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 3 - EX.2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fN1 = 0;
    float fN2 = 0;
    float fMedia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Nota 1 do aluno: ";
    cin >> fN1;

    cout << "\nNota 2 do aluno: ";
    cin >> fN2;

    fMedia = (fN1 + fN2) / 2;

    if (fMedia >= 7)
    {
        cout << "\n>> Aprovado " << endl;
    }
    else if (fMedia >= 3)
    {
        cout << "\n>> Exame " << endl;
    }
    else
    {
        cout << "\n>> Reporvado " << endl;
    }


    return 0;
}
