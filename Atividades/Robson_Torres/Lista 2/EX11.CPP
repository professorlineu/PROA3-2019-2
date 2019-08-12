/*******************************************************************
- Autor:        Robson Gomes Torres
- Descrição:    Lista 2 - Exercícios  11
*******************************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float num, quad, cubo, r2, r3;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do número
	cout << "\n123: ";
	// Recebe o número
	cin >> num;
	// Calcula o número ao quadrado
	quad = pow(num,2);
	// Calcula o número ao cubo
	cubo = pow(num,3);
	// Calcula a raiz quadrada do número
	r2 = sqrt(num);
	// Calcula a raiz cúbica do número
	r3 = exp(log(num) * 1/3);
	// Mostra o número ao quadrado
	cout << "\nNúmero ao quadrado  = " << quad;
	// Mostra o número ao cubo
	cout << "\nNúmero ao cubo  = " << cubo;
	// Mostra a raiz quadrada do número
	cout << "\nRaiz quadrada   = " << r2;
	// Mostra a raiz cúbica do número
	cout << "\nRaiz cúbica  = " << r3;
	// Pra o programa a espera de um ENTER

	getch();
}
