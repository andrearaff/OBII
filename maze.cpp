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

int right(int index, int base){
  if((index-1)<(base*base))
    index++;
  return index;
}

int left(int index, int base){
  if((index-1)>0)
    index=index-1;
  return index;
}

int up(int index, int base){
  index=index+base;
  return base;
}

int down(int index, int base){
  index=index+base;
  return base;
}
