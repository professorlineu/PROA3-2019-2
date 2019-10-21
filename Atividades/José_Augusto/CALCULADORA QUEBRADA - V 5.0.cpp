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

using namespace std;

int main()
{
    //Declaração de variáveis
    int ialeatorio1 = 0;
    int ialeatorio2 = 0;
    int ialeatorio3 = 0;
    int ialeatorio4 = 0;
    float fresult = 0;
    float fresult2 = 0;
    float fresult3 = 0;
    float fresult4 = 0;
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




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 7");

    //Código do programa
    do
    {




        cout << "___________________________________\n\n";

        cout << "            1º- EASY               \n";
        cout << "            2º- MEDIUM             \n";
        cout << "            3º- HARD               \n";
        cout << "            4º- SAIR               \n";

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

            while (icont1 < 5 )
            {
                icont7++;

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


            } // fim do While
            break;




        case 2:

            ialeatorio3 = rand() % 50 + 1;

            ialeatorio1 = rand() % 10 + 1;

            ialeatorio2 = rand() % 10 + 1;

            fresult2 = ialeatorio1 - ialeatorio2 + ialeatorio3; //Formula nivel 2

            cout << "___________________________________\n\n";

            cout << "\n   VOCÊ TERÁ 3 TENTATIVAS!!!!\n" << endl;

            cout << "___________________________________\n\n" << endl;

            icont2 = 0;
            icont8 = 0;

            while (icont2 < 3) //Nivel 2
            {

                icont8++;

                cout << "*********************************************";
                cout << "\n   VOCÊ ESTA NA " << icont8 << " TENTATIVA" << endl;
                cout << "*********************************************\n\n" << endl;


                icont2++;

                cout << "\n   Descubra qual o valor de Y ?" << endl;

                cout <<  "   " << ialeatorio1 << " - " << " Y " << " + " << ialeatorio3 << " = " << fresult2  << endl;

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

                    fresult2 = ialeatorio1 - ialeatorio2 + ialeatorio3; //Formula nivel 2

                    icont5++;
                } // Fim do else

            } // fim do While 2
            break;




        case 3:


            ialeatorio2 = rand() % 10 + 1;

            ialeatorio3 = rand() % 50 + 1;

            ialeatorio4 = rand() % 50 + 1;

            fresult3 = ialeatorio2 * ialeatorio3 + ialeatorio4; // Formula nível 3

            cout << "___________________________________\n\n";

            cout << "\n   VOCÊ TERÁ 3 TENTATIVAS!!!!\n" << endl;

            cout << "___________________________________\n\n" << endl;
            icont3 = 0;
            icont9 = 0;
            while (icont3 < 3) //Nivel 3
            {

                icont9++;

                cout << "*********************************************";
                cout << "\n   VOCÊ ESTA NA " << icont9 << " TENTATIVA" << endl;
                cout << "*********************************************\n\n" << endl;

                icont3++;

                cout << "\n   Descubra qual o valor de Y ?" << endl;

                cout <<  "   " << ialeatorio2 << " x " << " Y " << " + " << ialeatorio4 << " = " << fresult3  << endl;

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

                    fresult3 = ialeatorio2 * ialeatorio3 + ialeatorio4; // Formula nível 3

                    icont6++;
                } // Fim do else

            }//Fim do while
            break;

        case 4:
            cout << "O jogo acabou !" << endl;

            fresult4 = icont4 + icont5 + icont6; // soma para resultado no ranking


            cout << "___________________________________\n\n";
            cout << "             RANKING               \n";
            cout << "-----------------------------------\n\n";
            cout << "            1º-" << icont4 << "/5" << endl;
            cout << "            2º-" << icont5 << "/3" << endl;
            cout << "            3º-" << icont6 << "/3" << endl;
            cout << "            Total: "  << fresult4 <<  endl;
            cout << "___________________________________\n\n";

            break;




        } //fim do switch

    }
    while (iescolha != 4);



    return 0;
}
