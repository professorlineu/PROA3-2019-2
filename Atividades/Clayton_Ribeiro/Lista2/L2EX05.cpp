/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 2 - Exercício 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    double  d_preco = 0, d_precoDesc = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o preço do produto: "; // Recebe valor do preço
    cin >> d_preco;

    d_precoDesc = d_preco * ( 1 - 0.1 ); //Calcula o valor do preço com 10% de desconto

    cout << "\nO preço com desconto de 10% é: " << d_precoDesc;

	return 0;
}
