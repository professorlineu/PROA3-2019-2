/*********************************************************************
- Autor:          Ronaldo Rodrigues
- Descrição:      Lista 3 raiz quadrada e cubica antes da menssagem
**********************************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float num1, num2, r1, r2;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do 1o número
	cout << "\nDigite um número: ";
	// Recebe o 1o n£mero
	cin >> num1;
	// Mostra mensagem antes da leitura do 2o número
	cout << "\nDigite outro número: ";
	// Recebe o 2o número
	cin >> num2;
	// Calcula o 1o número elevado ao 2o
	r1 = pow (num1, num2);
	// Calcula o 2o número elevado ao 1o
	r2 = pow (num2, num1);
	// Mostra o 1o número elevado ao 2o
	cout << "\nResposta 1 = " << r1;
	// Mostra o 2o número elevado ao 1o
	cout << "\nResposta 2 = " <<  r2;
	// Para o programa a espera de um ENTER
	getch();
}
