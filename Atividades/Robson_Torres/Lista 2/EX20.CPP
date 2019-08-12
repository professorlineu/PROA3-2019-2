/*******************************************************************
- Autor:        Robson Gomes Torres
- Descrição:    Lista 2 - Exercícios - 20
*******************************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float ang, alt, escada, radiano;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do valor do ângulo
	cout << "\n120º: ";
	// Recebe valor de ângulo
	cin >> ang;
	// Mostra mensagem antes da leitura da altura da ponta da escada
	cout << "\n20º: ";
	// Recebe valor da altura da parede onde está a ponta da escada
	cin >> alt;
	// Converte o ângulo digitado em graus para radianos
	radiano = ang * 3.14 / 180;
	// Calcula tamanho da escada
	escada = alt / sin(radiano);
	// Mostra o tamanho da escada
	cout << "\nO comprimento da escada: "<< escada;
	// Para o programa a espera de um ENTER
	getch();
}
