/**********************************************************
- Autor:     CAUE GABRIEL
- Descrição: LISTA 3 - EX.2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fN1 = 0;
    float fN2 = 0;
    float fMedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

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
