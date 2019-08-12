/*******************************************************************
- Autor:        Robson Gomes Torres
- Descrição:    Lista 2 - Exercícios - 18
*******************************************************************/
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
    float peso_saco, racao_gato1, racao_gato2, total_final;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do peso do saco
	cout << "\n20 kg: ";
	// Recebe peso do saco de ração
	cin >> peso_saco;
	// Mostra mensagem antes da leitura da quantidade do gato1
	cout << "\n10gr: ";
	// Recebe raçao gasta com o 1o gato
	cin >> racao_gato1;
	// Mostra mensagem antes da leitura da quantidade do gato2
	cout << "\n20gr: ";
	// Recebe ração gasta com o 2o gato
	cin >> racao_gato2;
	// Converte a ração do gato 1 para Kg
	racao_gato1 = racao_gato1 / 1000;
	// Converte a ração do gato 2 para Kg
	racao_gato2 = racao_gato2 / 1000;
	// Calcula o restante após 5 dias
	total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
	// Mostra o restante
	cout << "\nTotal de ração restante (em Kg): " << total_final;
	// Para o programa a espera de um ENTER
	getch();
}
