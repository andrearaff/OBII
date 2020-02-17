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
  void set_wall( bool w, bool e, bool s, bool n);
  void set_visited(bool v);
  void get_wall(bool* w, bool* e, bool* s, bool* n);
  void get_visited( bool* v);
};
//
void right(uint8_t* righe,uint8_t* colonne);
void left(uint8_t* righe,uint8_t* colonne);
void up(uint8_t* righe,uint8_t* colonne);
void down(uint8_t* righe,uint8_t* colonne);

#endif
