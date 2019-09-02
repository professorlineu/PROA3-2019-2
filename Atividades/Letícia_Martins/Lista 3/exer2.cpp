/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o:  Exer.2 M�dia Aritm�tica e mensagem
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


    fMed = (fNota01 + fNota02) / 2; //Calcula o valor da m�dia do aluno

    if (fMed >= 3) //Condi��o caso o aluno tire 3 ou mais
    {
        if (fMed < 7) //Condi��o para o aluno ficar de exame
        {
            cout << "\nVoc� foi para o EXAME com m�dia: " << fMed;
        }


        else //Condi��o para o aluno ser aprovado sem exame
        {
            cout << "\nVoc� foi APROVADO com m�dia: " << fMed;
        }

    }

    else //Condi��o para o aluno ser reprovado
    {
        cout << "\nVoc� foi REPROVADO com m�dia: " << fMed;
    }

	return 0;
}

