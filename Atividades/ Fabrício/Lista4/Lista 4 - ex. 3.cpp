/******************************************************************************************
- Autor:     Fabr�cio Nunes
- Descri��o: Lista 4 - exercicio 3 - Recebe a idade de 8 pessoas e divida em 5 faixa et�ria
*******************************************************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()

{
    //Declara��o de vari�veis
    int i = 0;
    int iVal = 0;
    int iCont1 = 0,iCont2 = 0,iCont3 = 0,iCont4 = 0,iCont5 = 0;
    int iPrifaixa = 0;
    int iUltfaixa = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


   //C�digo do programa
   while (i < 8)
    {
        cout << "Idade: ";
        cin >> iVal;

        i = i + 1;//i++;

            if (iVal <= 15)
            {
                iCont1++; // iCont = iCont + 1;
            }

                if (iVal >= 16 && iVal <= 30)
                {
                    iCont2++; // iCont = iCont + 1;
                }

                    if (iVal >= 31 && iVal <= 45)
                    {
                        iCont3++; // iCont = iCont + 1;
                    }

                        if (iVal >= 46 && iVal <= 60)
                        {
                            iCont4++; // iCont = iCont + 1;
                        }

                            if (iVal > 60)
                            {
                                iCont5++; // iCont = iCont + 1;
                            }


    }// Fim do while / La�o

    cout << endl;

    //a quantidade de pessoas em cada faixa et�ria;
    cout << "Quantas pessoas com at� 15 anos: " << iCont1 << endl;

    cout << "Quantas pessoas de 16 � 30 anos: " << iCont2 << endl;

    cout << "Quantas pessoas de 31 � 45 anos: " << iCont3 << endl;

    cout << "Quantas pessoas de 46 � 60 anos: " << iCont4 << endl;

    cout << "Quantas pessoas acima de 60 anos: " << iCont5 << endl;

    cout << endl;

    //a porcentagem de pessoas na primeira faixa et�ria com rela��o ao total de pessoas;
    iPrifaixa = (iCont1 * 100) / 8;
    cout << "Porcentagem de pessoas na primeira faixa et�ria: " << iPrifaixa << "%" << endl;

    cout << endl;

    //a porcentagem de pessoas na �ltima faixa et�ria com rela��o ao total de pessoas;
    iUltfaixa = (iCont5 * 100) / 8;
    cout << "Porcentagem de pessoas na ultima faixa et�ria: " << iUltfaixa << "%" << endl;

 return 0;
}

