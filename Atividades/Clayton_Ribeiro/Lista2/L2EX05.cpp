/**********************************************************
- Autor:     Clayton C Ribeiro
- Descri��o: Lista 2 - Exerc�cio 5
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

    cout << "Digite o pre�o do produto: "; // Recebe valor do pre�o
    cin >> d_preco;

    d_precoDesc = d_preco * ( 1 - 0.1 ); //Calcula o valor do pre�o com 10% de desconto

    cout << "\nO pre�o com desconto de 10% �: " << d_precoDesc;

	return 0;
}
