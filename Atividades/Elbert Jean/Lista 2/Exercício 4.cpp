/**********************************************************
- Autor: Elbert Jean
- Descrição: Execício 4 - CAP03 Estruturas sequenciais
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float sal, novosal;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o preço do produto: ";
    // Recebe o produto
    cin >> sal;
    // Calcula o novo valor do produto
    novosal = sal - sal * 10/100;
    // Mostra o novo valor do produto
    cout << "\nValor com Desconto de 10% = " << novosal;
    // Para o programa a espera de um ENTER
    getch();
}
