/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 4 - Exercício 03
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int iIdade = 0, i = 0;
    int iCont01 = 0, iCont02 = 0, iCont03 = 0, iCont04 = 0, iCont05 = 0;
    float fCont01, fCont05;
    float fPorcent1 = 0, fPorcent5 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (i < 8)
    {
        cout << "Digite a idade em anos: ";    // Recebe o valor da idade
        cin >> iIdade;

        i++;

        if (iIdade <= 15)
        {
            iCont01++;
        }

        else if (iIdade >= 16 && iIdade <= 30)
        {
            iCont02++;
        }

        else if (iIdade >= 31 && iIdade <= 45)
        {
            iCont03++;
        }

        else if (iIdade >= 46 && iIdade <= 60)
        {
            iCont04++;
        }

        else
        {
            iCont05++;
        }

    } // Fim do while

    cout << "FAIXA ETÁRIA \tIDADE \t\t\t QUANTIDADE" << endl;
    cout << "1 \t\tAté 15 anos \t\t " << iCont01 << endl;
    cout << "2 \t\tDe 16 a 30 anos \t " << iCont02 << endl;
    cout << "3 \t\tDe 31 a 45 anos \t " << iCont03 << endl;
    cout << "4 \t\tDe 46 a 60 anos \t " << iCont04 << endl;
    cout << "5 \t\tAcima de 60 anos \t " << iCont05 << endl;

    fCont01 = iCont01;
    fPorcent1 = (fCont01/i) * 100;
    cout << "Porcentagem de pessoas na primeira faixa etária: " << fPorcent1 << "%" << endl;

    fCont05 = iCont05;
    fPorcent5 = (fCont05/i) * 100;
    cout << "Porcentagem de pessoas na última faixa etária: " << fPorcent5 << "%" << endl;

	return 0;
}
