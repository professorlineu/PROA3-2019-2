/**********************************************************
- Autor:     Livia Grecco
- Descri��o: Lista 3 - Ex.1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNota1 = 0;
    float fNota2 = 0;
    float fNota3 = 0;
    float fNota4 = 0;
    float fMedia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Informe a nota 1: ";
    cin >> fNota1;

    cout << "Informe a nota 2: ";
    cin >> fNota2;

    cout << "Informe a nota 3: ";
    cin >> fNota3;

    cout << "Informe a nota 4: ";
    cin >> fNota4;

    // Calculo da m�dia aritm�tica
    fMedia = (fNota1+fNota2+fNota3+fNota4)/4;

    cout << "M�dia Aritm�tica: " << fMedia << endl;

    if ( fMedia >= 7)


    cout << "Aprovado";

    else

    cout << "Reprovado";



    return 0;
}
