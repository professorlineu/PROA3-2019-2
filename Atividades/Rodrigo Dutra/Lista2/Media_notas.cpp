/**********************************************************
- Autor :  Rodrigo D.Silva
- Descri��o: M�dia de notas.
**********************************************************/


#include <iostream>
#include <conio.h>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float fnota1 = 0;
    float fnota2 = 0;
    float fmedia = 0;

    // Ativa acentua��o
    setlocale(LC_ALL,"");
    //Mostra mensagem antes da leitura das duas notas
    cout << "\nDigite o valor da primeira nota: ";
    cin >> fnota1;
    cout << "\nDigite o valor da segunda nota: ";
    cin >> fnota2;
    // Soma as notas digitadas
    fmedia = (fnota1 + fnota2)/2;
    // Calcula a m�dia
    cout << "\nA m�dia das notas � de = " << fmedia;
    // Para o programa a espera de um ENTER
    getch();
}
