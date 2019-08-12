/*******************************************************************
- Autor:        Robson Gomes Torres
- Descrição:    Lista 2 - Exercícios - 19
*******************************************************************/
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{ float a_degrau, a_usuario, qtd_degraus;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura da altura do degrau
	cout << "\n5: ";
	// Recebe a altura do degrau
	cin >> a_degrau;
	// Mostra mensagem antes da leitura da altura desejada pelo usuário
	cout << "\n4: ";
	// Recebe a altura desejada pelo usuário
	cin >> a_usuario;
	// Calcula o total de degraus necessários
	qtd_degraus = a_usuario / a_degrau;
	// Mostra total calculado
	cout << "\nTotal de degraus necessários: " << qtd_degraus;
	// Para o programa a espera de um ENTER
	getch();
}
