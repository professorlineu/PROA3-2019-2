/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 3 - Exercício 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float  fNota01 = 0, fNota02 = 0, fNota03 = 0, fNota04 = 0;
    float fMed = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    // Recebe o valor das notas

    cout << "Digite a sua nota da P1: ";
    cin >> fNota01;

    cout << "Digite a sua nota da P2: ";
    cin >> fNota02;

    cout << "Digite a sua nota da P3: ";
    cin >> fNota03;

    cout << "Digite a sua nota da P4: ";
    cin >> fNota04;

    fMed = (fNota01 + fNota02 + fNota03 + fNota04) / 4; //Calcula o valor da média do aluno

    if (fMed >= 7)
    {
        cout << "\nVocê foi APROVADO com média: " << fMed;
    }

    else
    {
        cout << "\nVocê foi REPROVADO com média: " << fMed;
    }

	return 0;
}
