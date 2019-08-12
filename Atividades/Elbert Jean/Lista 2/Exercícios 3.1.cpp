/**********************************************************
- Autor: Elbert Jean
- Descrição: Exercício 4 - CAP03 Estruturas sequenciais
**********************************************************/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    float nota1, nota2, peso1, peso2, media;
    // Limpa a tela
    system("cls");
    // Recebe as três notas e seus pesos
    cin >> nota1 >> nota2 >> peso1 >> peso2;
    // Calcula a média
    media = (nota1 * peso1 + nota2 * peso2)/(peso1 + peso2);
    // Mostra o resultado da média
    // Formatando a saída para mostrar apenas duas casas decimais
    cout << setprecision(2);
    cout << "\n" << media;
    // Para o programa a espera de um ENTER
    getch();
}
