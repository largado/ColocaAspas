#include <iostream>
#include <fstream>

using namespace std;
/*
 * Autor Alexandro Avena
 * Data 26/04/2022
 * versáo 0.1
 */

int main() {
    ifstream entrada;
    entrada.open("entrada.txt");
    if(!entrada.is_open()){
        cout << "arquivo de entrada não encontrado!" << endl;
        cout << "O arquivo de entrada deve ter o seguinte nome -> entrada.txt" << endl;
    }

    ofstream saida;
    saida.open("saida.txt",ios::app);

    string linha;

    int teclapressionada = 0;

    cout << "Digite 1 para adicionar 55..." << endl;
    cout << "Pressione 2 para colocar apenas aspas...." << endl;

    cin >> teclapressionada;



    if(teclapressionada == 1)
        while(getline(entrada,linha)){
            saida << "'55" + linha + "'," << endl;
        }
        else {
            while(getline(entrada,linha)){
                saida << "'" + linha + "'," << endl;
            }

        }





    saida.close();
    entrada.close();

    return 0;
}
