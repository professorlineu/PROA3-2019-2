/**********************************************************
- Autor:    allison gonçalves de almeida
- Descrição: lista 2 exercicio 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float  f_vlr_sal_min = 0, f_vlr_sal_func = 0, f_num_sal = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o valor do seu salario: "; // recebe o valor do salario do funcionario
    cin  >> f_vlr_sal_func;


    cout << "\ndigite o valor do salario minimo: "; // recebe valor do salario minimo
    cin  >> f_vlr_sal_min;

    f_num_sal = f_vlr_sal_func / f_vlr_sal_min; //calcula a quantidade de salarios minimos

    cout << "\nquantidade de salarios minimos que voce recebe: " <<f_num_sal;

    return 0 ;
}
