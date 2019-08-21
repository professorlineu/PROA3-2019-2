/**********************************************************
- Autor: Rodrigo D.Silva
- Descrição: Trigonometria
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fcat1 = 0;
    float fcat2 = 0;
    float fhip = 0;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o cateto oposto: ";
    // Recebe o produto
    cin >> fcat1;
    // Calcula o novo valor do produto
    cout << "\nDigite o cateto adjacente: ";
    // Recebe o total de vendas
    cin >> fcat2;
    // colocar o valor da comissão
    fhip = fcat1*fcat1 + fcat2*fcat2;
    // Mostra o novo valor do produto
    cout << "\nValor da hipotenusa = " << sqrt(fhip);
    // Para o programa a espera de um ENTER
    getch();
}
