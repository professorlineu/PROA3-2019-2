/**********************************************************
- Autor:     Clayton C Ribeiro
- Descri��o: Lista 2 - Exerc�cio 12
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

    cout << "Digite o valor do seu sal�rio: "; // Recebe valor do sal�rio do funcion�rio
    cin >> f_vlr_sal_FUNC;

    cout << "\nDigite o valor do sal�rio m�nimo: "; // Recebe valor do sal�rio m�nimo
    cin >> f_vlr_sal_MIN;

    f_num_sal = f_vlr_sal_FUNC / f_vlr_sal_MIN; //Calcula a quantidade de sal�rios m�nimos

    cout << "\nQuantidade de sal�rios m�nimos que voc� recebe: " << f_num_sal;

	return 0;
}
