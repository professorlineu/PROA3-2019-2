/**********************************************************
- Autor: Elbert Jean
- Descrição: Execício 5 - CAP03 Estruturas sequenciais
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int cat1, cat2, hip;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o cateto oposto: ";
    // Recebe o produto
    cin >> cat1;
    // Calcula o novo valor do produto
    cout << "\nDigite o cateto adjacente: ";
    // Recebe o total de vendas
    cin >> cat2;
    // colocar o valor da comissão
    hip = cat1*cat1 + cat2*cat2;
    // Mostra o novo valor do produto
    cout << "\nValor da hipotenusa = " << sqrt(hip);
    // Para o programa a espera de um ENTER
    getch();
}
