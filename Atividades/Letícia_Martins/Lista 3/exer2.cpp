/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição:  Exer.2 Média Aritmética e mensagem
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float  fNota01 = 0, fNota02 = 0;
    float fMed = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    // Recebe o valor das notas

    cout << "Digite a sua primeira nota: ";
    cin >> fNota01;

    cout << "Digite a sua segunda nota: ";
    cin >> fNota02;


    fMed = (fNota01 + fNota02) / 2; //Calcula o valor da média do aluno

    if (fMed >= 3) //Condição caso o aluno tire 3 ou mais
    {
        if (fMed < 7) //Condição para o aluno ficar de exame
        {
            cout << "\nVocê foi para o EXAME com média: " << fMed;
        }


        else //Condição para o aluno ser aprovado sem exame
        {
            cout << "\nVocê foi APROVADO com média: " << fMed;
        }

    }

    else //Condição para o aluno ser reprovado
    {
        cout << "\nVocê foi REPROVADO com média: " << fMed;
    }

	return 0;
}

