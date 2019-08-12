/*******************************************************************
- Autor:        Robson Gomes Torres
- Descrição:    Lista 2 - Exercícios - 17
*******************************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main ()
{
    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Formatando a saída
	cout << fixed << setprecision(3);
	// Mostra mensagem antes da leitura do valor do salário
	cout << "\n2400: ";
	// Recebe o valor do salário
	cin >> salario;
	// Mostra mensagem antes da leitura do valor do 1o cheque
	cout << "\n700: ";
	// Recebe o valor do 1§ cheque emitido
	cin >> cheque1;
	// Mostra mensagem antes da leitura do valor do 2o cheque
	cout << "\n700: ";
	// Recebe o valor do 2o cheque emitido
	cin >> cheque2;
	// Calcula CPMF referente ao 1o cheque
	cpmf1 = cheque1 * 0.38 / 100;
	// Calcula CPMF referente ao 2o cheque
	cpmf2 = cheque2 * 0.38 / 100;
	// Calcula o saldo
	saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
	// Mostra o saldo
	cout << "\nO valor do saldo: " << saldo;
	// Para o programa a espera de um ENTER
	getch();
}
