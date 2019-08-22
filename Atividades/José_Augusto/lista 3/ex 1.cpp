/**********************************************************
- Autor:     José Augusto
- Descrição: Lista 3 - Exercício 1/Nota e média!
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float inota1=0;
    float inota2=0;
    float inota3=0;
    float inota4=0;
    float imedia=0;

    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
 cout << "\nDigite a primeira nota:";
 cin >> inota1;

 cout << "\nDigite a segunda nota:";
 cin >> inota2;

 cout << "\nDigite a terceira nota:";
 cin >> inota3;

 cout << "\nDigite a quarta nota:";
 cin >> inota4;

  //operações

  imedia = (inota1 + inota2 + inota3 + inota4)/4;

  cout << "\nSua Média é=" << imedia;

  if (imedia >= 7)
  {
     cout << "\nParabéns você PASSOU!";
  }

  else
 {
     cout << "\nEstude mais um pouco, você NÃO passou ";
 }

    return 0;
}
