/*********************************************************************
- Autor:          Ronaldo Rodrigues
- Descrição:      Lista 3
**********************************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{ float area, raio;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do raio
	cout << "\nDigite o raio: ";
	// Recebe o raio
	cin >> raio;
	// Calcula a  rea
	area = 3.1415 * pow(raio,2);
	// Mostra a  rea
	cout << "\nÁrea: " << area;
	// Para o programa a espera de um ENTER
	getch();
}
