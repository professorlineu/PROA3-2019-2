/**********************************************************
- Autor:     allison g. de almeida
- Descrição: exercicio 03- lista 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{


    float fsalario = 0, fsalarioreajus = 0;



    setlocale(LC_ALL,"");
    system("color F1");

    //recebe o valor das notas


  cout << "digite o seu salario: ";  //receba o valor do salario
  cin  >> fsalario;

  if ( fsalario <= 300)
    {

  fsalarioreajus = fsalario * (1 + 0.35);
  cout << "seu novo salario sera de: " << fsalarioreajus;
    }


   else
   {

       fsalarioreajus = fsalario * (1 + 0.35);
       cout << "seu novo salario sera de: " << fsalarioreajus;
   }
   return 0;
   }
