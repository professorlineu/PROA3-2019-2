/**********************************************************
- Autor: Rodrigo D.Silva
- Descri��o: Comiss�o
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float fsal = 0;
    float fvendas = 0;
    float fnovosal = 0;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o sal�rio do funcion�rio: ";
    // Recebe o produto
    cin >> fsal;
    // Calcula o novo valor do produto
    cout << "\nDigite o total de vendas feito pelo vendedor: ";
    // Recebe o total de vendas
    cin >> fvendas;
    // colocar o valor da comiss�o
    fnovosal = fsal + fvendas * 04/100;
    // Mostra o novo valor do produto
    cout << "\nSal�rio do funcion�rio com comiss�o = " << fnovosal;
    // Para o programa a espera de um ENTER
    getch();
}
