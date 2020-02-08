#include "maze.h"
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
  /*warren cell[10][10];
  /*if (argc > 1 && std::string(argv[1]) == "-xterm")
  {
    if (::execl("/usr/bin/xterm", "xterm", "-e", argv[0], (char*)NULL))
    {
      std::perror("execl");
      return 1;
    }
  }for( int i=0; i<10; i++){
      for( int j=0; j < 10; j++ ){
        cell[i][j].warren();
      }
    }
    bool west;
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
    std::vector<warren> cell(100);
    std::cout << cell[0] << '\n';
    cin.ignore();
}
