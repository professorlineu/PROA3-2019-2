/**********************************************************
- Autor:     allison g. de almeida
- Descrição: exercicio 03- lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{


    float fnota01 = 0, fnota02 = 0;
    float fmedia = 0;


    setlocale(LC_ALL,"");
    system("color F1");

    //recebe o valor das notas


  cout << "digite a sua nota da p1: ";
  cin  >> fnota01;

  cout <<"\digite a sua nota p2 ";
  cin  >> fnota02;



    fmedia = (fnota01 + fnota02) / 2; // calcular a media do aluno

      if ( fmedia >= 3) //condiçao caso o aluno tire 3 ou mais
      {

        if (fmedia < 7) //condiçao para o aluno ficar de exame
        {

        cout <<"\nvoce ficou de exame com media: " << fmedia;
        }

        else //condiçao para o aluno ser aprovado sem exame
        {

        cout <<"\nvoce foi aprovado com media: " << fmedia;

        }
      }

  else //condiçao para o aluno ser aprovado
  {

    cout <<"\nvoce foi reprovado com media: " << fmedia;

  }

    return 0;
    }

