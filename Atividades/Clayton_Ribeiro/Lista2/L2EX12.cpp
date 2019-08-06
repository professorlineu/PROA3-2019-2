/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 2 - Exercício 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>

using namespace std;

int main ()
{
    float  f_vlr_sal_MIN, f_vlr_sal_FUNC, f_num_sal; // Limpa a tela

    system("cls");

    setlocale(LC_ALL,""); // Mostra mensagem antes da leitura do total de horas trabalhadas

	cout << "\nDigite o valor do seu salário: "; // Recebe valor do salário do funcionário
	cin >> f_vlr_sal_FUNC;

	cout << "\nDigite o valor do salário mínimo: "; // Recebe valor do salário mínimo
	cin >> f_vlr_sal_MIN;

	f_num_sal = f_vlr_sal_FUNC / f_vlr_sal_MIN; //Calcula a quantidade de salários mínimos


	cout << "\nQuantidade de salários mínimos que você recebe: " << f_num_sal;

	getch();
}
