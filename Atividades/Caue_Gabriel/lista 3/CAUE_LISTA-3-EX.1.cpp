/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 3 - Ex.1
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
    float fN3 = 0;
    float fN4 = 0;
    float fMedia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Nota 1 do aluno: ";
    cin >> fN1;

    cout << "\nNota 2 do aluno: ";
    cin >> fN2;

    cout << "\nNota 3 do aluno: ";
    cin >> fN3;

    cout << "\nNota 4 do aluno: ";
    cin >> fN4;

    fMedia = (fN1 + fN2 + fN3 + fN4) / 4;

    cout << "\n>>> A M�dia aritm�tica do aluno �: " << fMedia << endl;


    return 0;
}
