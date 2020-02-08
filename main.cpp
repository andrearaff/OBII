#include "maze.h"
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
  /*bool west;
    bool east;
    bool south;
    bool north;
    bool vis;
    int x;
    int y;
    std::cout << "Metti Valori\n";
    std::cin>>x;
    std::cin >> y;
    cell[x][y].get_wall(&west,&east,&south,&north);
    cout<<west<<east<<south<<north;*/
    std::vector<warren> cell(1);
    vector <int> cella(1);
    cin>>cella[0];
    cell[0].set_wall(cella[0],false,false,false)
    cin.ignore();
}
