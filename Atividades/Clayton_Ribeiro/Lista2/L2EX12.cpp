/**********************************************************
- Autor:     Clayton C Ribeiro
- Descri��o: Lista 2 - Exerc�cio 12
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

	cout << "\nDigite o valor do seu sal�rio: "; // Recebe valor do sal�rio do funcion�rio
	cin >> f_vlr_sal_FUNC;

	cout << "\nDigite o valor do sal�rio m�nimo: "; // Recebe valor do sal�rio m�nimo
	cin >> f_vlr_sal_MIN;

	f_num_sal = f_vlr_sal_FUNC / f_vlr_sal_MIN; //Calcula a quantidade de sal�rios m�nimos


	cout << "\nQuantidade de sal�rios m�nimos que voc� recebe: " << f_num_sal;

	getch();
}
