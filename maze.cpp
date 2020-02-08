#include "maze.h"
warren::warren(){
    west_wall  = 0;
    east_wall  = 0;
    south_wall = 0;
    north_wall = 0;
}
warren::~warren(){
}

bool warren::set_wall(bool w,bool e, bool s, bool n ){
  west_wall  = w;
  east_wall  = e;
  south_wall = s;
  north_wall = n;
}

bool warren::set_visited(bool v){
  visited = v;
}

bool warren::get_wall(bool* w, bool* e, bool* s, bool* n){
  west_wall  = *w;
  east_wall  = *e;
  south_wall = *s;
  north_wall = *n;
}

bool warren::get_visited(bool* v){
  visited = *v;
}
