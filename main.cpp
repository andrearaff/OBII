#include "maze.h"
#include <iostream>
#include <vector>
#include <stdint.h>
using namespace std;

int main()
{
    vector<warren> rna(5); //copia i dati
    vector<vector<warren>> M;
    uint8_t r = 0;//righe
    uint8_t c = 0;//colonne
    bool north;
    bool south;
    bool east;
    bool west;
    M.resize(1);
    M[0] = rna;
    rna = M[0];
    M[0][0].get_wall(&west, &east, &south, &north);
    cout << north << endl;
    /*for(int i = 0; i < 5; i++)
      cout << M[0][i] << endl;
    */
    return 0;
}
