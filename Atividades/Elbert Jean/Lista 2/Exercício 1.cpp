/**********************************************************
- Autor :  Elbert Jean
- Descrição: Exercício 1 - Cap03 Estrututas Sequenciais
**********************************************************/


#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    int n1, n2, subtrai;
    // Recebe os dois números
    cin >> n1;
    cin >> n2;
    // Subtrai os números digitados
    subtrai = n1 - n2;
    // Mostra o resultado da subtração
    // \n - coloca o cursor na linha de baixo
    cout << "\n" << subtrai;
    // Para o programa a espera de um ENTER
    getch();
}
