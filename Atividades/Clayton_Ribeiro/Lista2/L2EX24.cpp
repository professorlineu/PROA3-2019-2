/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 2 - Exercício 24
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float  f_DinReal = 0, f_DinDol = 0, f_DinMarcAle = 0, f_DinLibra = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite valor de dinheiro em Reais: "; // Recebe o valor da quantidade de dinheiro em Reais
    cin >> f_DinReal;

    f_DinDol = f_DinReal / 1.8; //Calcula o valor da quantidade de dinheiro em Dólar
    f_DinMarcAle = f_DinReal / 2; //Calcula o valor da quantidade de dinheiro em Marco Alemão
    f_DinLibra = f_DinReal / 3.57; //Calcula o valor da quantidade de dinheiro em Libra Esterlina

    cout << "\nValor convertido de Reais para Dólar: " << f_DinDol;
    cout << "\nValor convertido de Reais para Marco Alemão: " << f_DinMarcAle;
    cout << "\nValor convertido de Reais para Libra Esterlina: " << f_DinLibra;

	return 0;
}
