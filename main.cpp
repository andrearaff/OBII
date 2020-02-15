#include "maze.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> primo(1);
    vector<int> secondo(5);
    vector<vector<int>> M;
    secondo[0] = -5;
    secondo[4] = 23;
    M.resize(1);
    M[0] = secondo;
    cout << M[0][0] << endl;
    for(int i = 0; i < 5; i++)
      cout << M[0][i] << endl;

    return 0;
}
