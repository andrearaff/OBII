#ifndef _MAZE_H_
#define _MAZE_H_


class warren
{
private:
  bool west_wall;
  bool east_wall;
  bool south_wall;
  bool north_wall;
  bool visited;
public:
  warren();
 ~warren();
  bool set_wall( bool w, bool e, bool s, bool n);
  bool set_visited(bool v);
  bool get_wall(bool* w, bool* e, bool* s, bool* n);
  bool get_visited( bool* v);
};
//venga definito un array di modulo "b*b" e di indice "i"
int right(int index,int base);
int left(int index,int base);
int up(int index, int base);
int down(int index, int base);

#endif
