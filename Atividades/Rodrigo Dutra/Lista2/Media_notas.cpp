/**********************************************************
- Autor :  Rodrigo D.Silva
- Descrição: Média de notas.
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

    // Ativa acentuação
    setlocale(LC_ALL,"");
    //Mostra mensagem antes da leitura das duas notas
    cout << "\nDigite o valor da primeira nota: ";
    cin >> fnota1;
    cout << "\nDigite o valor da segunda nota: ";
    cin >> fnota2;
    // Soma as notas digitadas
    fmedia = (fnota1 + fnota2)/2;
    // Calcula a média
    cout << "\nA média das notas é de = " << fmedia;
    // Para o programa a espera de um ENTER
    getch();
}
