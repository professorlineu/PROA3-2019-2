#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float area, raio;
	// Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do raio
	cout << "\nDigite o raio: ";
	// Recebe o raio
	cin >> raio;
	// Calcula a �rea
	area = 3.1415 * raio * raio;
	// Mostra a �rea
	cout << "\n�rea: " << area;
	// Para o programa a espera de um ENTER
	getch();
}
