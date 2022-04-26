#include <iostream>
#include <fstream>

using namespace std;
/*
 * Autor Alexandro Avena
 * Data 25/04/2022
 * versáo 0.1
 */

int main() {
    ifstream entrada;
    entrada.open("entrada.txt");
    if(!entrada.is_open()){
        cout << "arquivo de entrada não encontrado!" << endl;
    }

    ofstream saida;
    saida.open("RITMportout2022-04-25.txt",ios::app);

    string linha;
    while(getline(entrada,linha)){
        saida << "'" + linha + "'" << endl;
    }

    saida.close();
    entrada.close();

    return 0;
}
