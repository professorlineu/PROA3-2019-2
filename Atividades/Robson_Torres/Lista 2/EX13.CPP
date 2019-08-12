/*******************************************************************
- Autor:        Robson Gomes Torres
- Descrição:    Lista 2 - Exercícios - 13
*******************************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float pes, polegadas, jardas, milhas;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura da medida em pés
	cout << "\n6.9: ";
	// Recebe a medida em pés
	cin >> pes;
	// Calcula a medida em polegadas
	polegadas = pes * 12;
	// Calcula a medida em jardas
	jardas = pes / 3;
	// Calcula a medida em milhas
	milhas = jardas / 1760;
	// Mostra a medida em polegadas
	cout << "\nEm polegadas   = " << polegadas;
	// Mostra a medida em jardas
	cout << "\nEm jardas  = " << jardas;
	// Mostra a medida em milhas
	cout << "\nEm milhas  = " << milhas;
	// Para o programa a espera de um ENTER
	getch();
}
