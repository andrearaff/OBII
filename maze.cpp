#include "maze.h"
#include <stdint.h>        
warren::warren(){
    west_wall  = 0;
    east_wall  = 0;
    south_wall = 0;
    north_wall = 0;
}
warren::~warren(){
}

void warren::set_wall(bool w,bool e, bool s, bool n ){
  west_wall  = w;
  east_wall  = e;
  south_wall = s;
  north_wall = n;
}

void warren::set_visited(bool v){
  visited = v;
}

void warren::get_wall(bool* w, bool* e, bool* s, bool* n){
  west_wall  = *w;
  east_wall  = *e;
  south_wall = *s;
  north_wall = *n;
}

void warren::get_visited(bool* v){
  visited = *v;
}

void right(uint8_t* righe,uint8_t* colonne){
  colonne++;
}

 void left(uint8_t* righe,uint8_t* colonne){
  colonne--;
}

void up(uint8_t* righe,uint8_t* colonne){
  righe++;
}

void down(uint8_t* righe,uint8_t* colonne){
  righe--;
}


