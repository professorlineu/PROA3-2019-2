/*******************************************************************
- Autor:        Robson Gomes Torres
- Descrição:    Lista 2 - Exercícios - 16
*******************************************************************/
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
    float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do total de horas trabalhadas
	cout << "\n8: ";
	// Recebe total de horas trabalhadas
	cin >> horas_t;
	// Mostra mensagem antes da leitura do salário mínimo
	cout << "\n950: ";
	// Recebe valor do salário mínimo
	cin >> vlr_sal_min;
	// Calcula o valor de cada hora trabalhada
	vlr_hora_t =  vlr_sal_min / 2;
	// Calcula o salário bruto
	vlr_sal_bru = vlr_hora_t * horas_t;
	// Calcula o imposto de 3% do salário bruto
	imp = vlr_sal_bru * 3 / 100;
	// Calcula o salário a receber
	vlr_sal_liq = vlr_sal_bru - imp;
	// Mostra o salário a receber
	cout << "\nO salário a receber: " << vlr_sal_liq;
	// Para o programa a espera de um ENTER
	getch();
}
