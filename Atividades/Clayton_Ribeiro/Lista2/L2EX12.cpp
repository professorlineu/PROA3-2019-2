/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 2 - Exercício 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float  f_vlr_sal_MIN = 0, f_vlr_sal_FUNC = 0, f_num_sal = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o valor do seu salário: "; // Recebe valor do salário do funcionário
    cin >> f_vlr_sal_FUNC;

    cout << "\nDigite o valor do salário mínimo: "; // Recebe valor do salário mínimo
    cin >> f_vlr_sal_MIN;

    f_num_sal = f_vlr_sal_FUNC / f_vlr_sal_MIN; //Calcula a quantidade de salários mínimos

    cout << "\nQuantidade de salários mínimos que você recebe: " << f_num_sal;

	return 0;
}
