/*********************************************************************
- Autor:          Ronaldo Rodrigues
- Descri��o:      Lista 3
**********************************************************************/
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
    // Ativa acentua��o
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do n�mero
	cout << "\nDigite um n�mero: ";
	// Recebe o n�mero
	cin >> num;
	// Calcula o n�mero ao quadrado
	quad = pow(num,2);
	// Calcula o n�mero ao cubo
	cubo = pow(num,3);
	// Calcula a raiz quadrada do n�mero
	r2 = sqrt(num);
	// Calcula a raiz c�bica do n�mero
	r3 = exp(log(num) * 1/3);
	// Mostra o n�mero ao quadrado
	cout << "\nN�mero ao quadrado  = " << quad;
	// Mostra o n�mero ao cubo
	cout << "\nN�mero ao cubo  = " << cubo;
	// Mostra a raiz quadrada do n�mero
	cout << "\nRaiz quadrada   = " << r2;
	// Mostra a raiz c�bica do n�mero
	cout << "\nRaiz c�bica  = " << r3;
	// Pra o programa a espera de um ENTER
	getch();
}
