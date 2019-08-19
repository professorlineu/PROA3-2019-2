/**********************************************************
- Autor:     Gerson Flores de Souza
- Descrição: lista2 exer11
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fdiag1 = 0;
    float fdiag2 = 0;
    float fresultado = 0;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o valor da diagonal maior: ";
    // Recebe o valor do lado do quadrado
    cin >> fdiag1;
    // Calcula o novo valor do produto
    cout << "\nDigite o valor da diagonal menor: ";
    // Recebe o valor do lado do quadrado
    cin >> fdiag2;
    // Calcula o novo valor do produto
    fresultado = (fdiag1 * fdiag2)/2;
    // Mostra o novo valor do produto
    cout << "\nValor da área do losango = " << fresultado;
    // Para o programa a espera de um ENTER
    getch();
}
