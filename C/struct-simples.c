#include <stdio.h>
#include <stdlib.h>
/*
typedef struct{
  int x;
  int y;
  int z;
}point;
*/

struct point{
  int x;
  int y;
  int z;
};


int main(int argc, char *argv[]){
  struct point cood;
  if (argc < 4){
    printf("Miss Point Coordenate\n");
  }
  else if(argc == 4){
    cood.x = atoi(argv[1]);
    cood.y = atoi(argv[2]);
    cood.z = atoi(argv[3]);
  }
  printf("Point: x: %d, y:%d, z:%d\n",cood.x,cood.y,cood.z);
  return 0;
}

  
    
