/**********************************************************
- Autor:     Bruno Henrique
- Autor:     José Augusto
- Autor:     Paulo Ricardo
- Descrição: CALCULADORA QUEBRADA - v 1.0
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <conio.h>

using namespace std;

int main()
{
    //Declaração de variáveis
    int ialeatorio1 = 0;
    int ialeatorio2 = 0;
    int ialeatorio3 = 0;
    int ialeatorio4 = 0;
    float fresult = 0;
    float fresult4 = 0;
    float fresult5 = 0;
    float fresult6 = 0;
    int inumero = 0;
    int iescolha = 0;
    int icont1 = 0;
    int icont2 = 0;
    int icont3 = 0;
    int icont4 = 0;
    int icont5 = 0;
    int icont6 = 0;
    int icont7 = 0;
    int icont8 = 0;
    int icont9 = 0;
    int icontA = 0;
    int icontB = 0;
    int icontC = 0;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 7");

    //Código do programa
    do
    {

    system("cls");



        cout << "___________________________________\n\n";

        cout << "            1º- EASY               \n";
        cout << "            2º- MEDIUM             \n";
        cout << "            3º- HARD               \n";
        cout << "            4º- RANKING               \n";
        cout << "            5º- SAIR               \n";

        cout << "___________________________________\n\n";


        cout << "Nivel:";
        cin >> iescolha;


        srand(time(NULL));

        switch (iescolha)
        {

        case 1:

            ialeatorio1 = rand() % 10 + 1;

            ialeatorio2 = rand() % 10 + 1;

            fresult = ialeatorio1 + ialeatorio2; // Formula nível 1

            cout << "___________________________________\n\n";

            cout << "\n   VOCÊ TERÁ 5 TENTATIVAS!!!!\n" << endl;

            cout << "___________________________________\n\n" << endl;


            icont1 = 0;
            icont7 = 0;
            icont4 = 0;
            icontA = 0;


            while (icont1 < 5 )
            {
                 system("cls");

                icont7++;
                icontA++;

                cout << "*********************************************";
                cout << "\n   VOCÊ ESTA NA " << icont7 << " TENTATIVA" << endl;
                cout << "*********************************************\n\n" << endl;

                icont1++;

                cout << "\n   Descubra qual o valor de Y ?" << endl;

                cout <<  "   " << ialeatorio2 << " + " << " Y " << " = " << fresult << endl;

                cout << "   " ;
                cin >> inumero;

                if (ialeatorio1 > inumero )
                {
                    cout << "   Pensei em um número MAIOR!" << endl;
                }

                else if (ialeatorio1 < inumero)
                {
                    cout << "   Pensei em número Menor!" << endl;
                }

                else

                {
                    cout << "   Parabéns você ACERTOU!!!!!!!" << endl;
                    ialeatorio1 = rand() % 10 + 1;

                    ialeatorio2 = rand() % 10 + 1;

                    fresult = ialeatorio1 + ialeatorio2; // Formula nível 1

                    icont4++;

                } // Fim do else

                system ("pause");



            } // fim do While

            cout << "\nTOTAl DE PONTOS:" << icont4 << endl;

            break;




        case 2:

            ialeatorio3 = rand() % 50 + 1;

            ialeatorio1 = rand() % 10 + 1;

            ialeatorio2 = rand() % 10 + 1;

            fresult = ialeatorio1 - ialeatorio2 + ialeatorio3; //Formula nivel 2

            cout << "___________________________________\n\n";

            cout << "\n   VOCÊ TERÁ 3 TENTATIVAS!!!!\n" << endl;
            cout << "\n   CADA TENTATIVA VALE 2 PONTOS!!!\n" << endl;

            cout << "___________________________________\n\n" << endl;

            icont2 = 0;
            icont8 = 0;
            icont5 = 0;
            icontB = 0;


            while (icont2 < 3) //Nivel 2
            {
                system("cls");

                icont8++;
                icontB = icontB + 2;

                cout << "*********************************************";
                cout << "\n   VOCÊ ESTA NA " << icont8 << " TENTATIVA" << endl;
                cout << "*********************************************\n\n" << endl;


                icont2++;

                cout << "\n   Descubra qual o valor de Y ?" << endl;

                cout <<  "   " << ialeatorio1 << " - " << " Y " << " + " << ialeatorio3 << " = " << fresult  << endl;

                cout << "   " ;
                cin >> inumero;

                if (ialeatorio2 > inumero )
                {
                    cout << "   Pensei em um número MAIOR!" << endl;
                }

                else if (ialeatorio2 < inumero)
                {
                    cout << "   Pensei em número Menor!" << endl;
                }

                else
                {
                    cout << "   Parabéns você ACERTOU!!!!!!!" << endl;

                    ialeatorio1 = rand() % 10 + 1;

                    ialeatorio2 = rand() % 10 + 1;

                    ialeatorio3 = rand() % 50 + 1;

                    fresult = ialeatorio1 - ialeatorio2 + ialeatorio3; //Formula nivel 2

                    icont5++;
                } // Fim do else

                system ("pause");

            } // fim do While 2

            fresult5 = icont5 * 2;

            cout << "\nTOTAl DE PONTOS:" << fresult5 << endl;

            break;




        case 3:


            ialeatorio2 = rand() % 10 + 1;

            ialeatorio3 = rand() % 50 + 1;

            ialeatorio4 = rand() % 50 + 1;

            fresult = ialeatorio2 * ialeatorio3 + ialeatorio4; // Formula nível 3

            cout << "___________________________________\n\n";

            cout << "\n   VOCÊ TERÁ 3 TENTATIVAS!!!!\n" << endl;
            cout << "\n   CADA TENTATIVA VALE 3 PONTOS!!!\n" << endl;

            cout << "___________________________________\n\n" << endl;

            icont3 = 0;
            icont9 = 0;
            icontC = 0;
            icont6 = 0;

            while (icont3 < 3) //Nivel 3
            {

                icont9++;
                icontC = icontC + 3;

                cout << "*********************************************";
                cout << "\n   VOCÊ ESTA NA " << icont9 << " TENTATIVA" << endl;
                cout << "*********************************************\n\n" << endl;

                icont3++;

                cout << "\n   Descubra qual o valor de Y ?" << endl;

                cout <<  "   " << ialeatorio2 << " x " << " Y " << " + " << ialeatorio4 << " = " << fresult  << endl;

                cout << "   " ;
                cin >> inumero;

                if (ialeatorio3 > inumero )
                {
                    cout << "   Pensei em um número MAIOR!" << endl;
                }

                else if (ialeatorio3 < inumero)
                {
                    cout << "   Pensei em número Menor!" << endl;
                }

                else
                {
                    cout << "   Parabéns você ACERTOU!!!!!!!" << endl;
                    ialeatorio2 = rand() % 10 + 1;

                    ialeatorio3 = rand() % 50 + 1;

                    ialeatorio4 = rand() % 50 + 1;

                    fresult = ialeatorio2 * ialeatorio3 + ialeatorio4; // Formula nível 3

                    icont6++;
                } // Fim do else

                system ("pause");

            }//Fim do while

            fresult6 = icont6 * 3;

            cout << "\nTOTAl DE PONTOS:" << fresult6 << endl;


            break;

        case 4:

            fresult4 = icont4 + fresult5 + fresult6; // soma para resultado no ranking
            fresult = icontA + icontB + icontC; // soma para resultado no ranking

            cout << "___________________________________\n\n";
            cout << "             RANKING               \n";
            cout << "-----------------------------------\n\n";
            cout << "            1º-" << icont4 << "/" << icontA << endl;
            cout << "            2º-" << fresult5 << "/" << icontB << endl;
            cout << "            3º-" << fresult6 << "/" << icontC << endl;
            cout << "            Total de pontos: "  << fresult4 << "/" << fresult <<  endl;
            cout << "___________________________________\n\n";

            break;

            system ("pause");



        case 5:
            cout << "O jogo acabou !" << endl;

            fresult4 = icont4 + fresult5 + fresult6; // soma para resultado no ranking
            fresult = icontA + icontB + icontC; // soma para resultado no ranking


            cout << "___________________________________\n\n";
            cout << "             RANKING               \n";
            cout << "-----------------------------------\n\n";
            cout << "            1º-" << icont4 << "/" << icontA << endl;
            cout << "            2º-" << fresult5 << "/" << icontB << endl;
            cout << "            3º-" << fresult6 << "/" << icontC << endl;
            cout << "            Total de pontos: "  << fresult4 << "/" << fresult <<  endl;
            cout << "___________________________________\n\n";

            break;


        } //fim do switch

    }
    while (iescolha != 4);



    return 0;
}
