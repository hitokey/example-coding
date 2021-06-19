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
    printf("Point: x(%lu):%d, y(%lu):%d, z(%lu):%d\n",
	  sizeof(cood.x),cood.x,sizeof(cood.y),cood.y,sizeof(cood.z),cood.z);
  }
  printf("Memory(%lu): x-end: %p, y-end: %p, z-end:%p\n",
	 sizeof(cood),(void*)&cood.x,(void*)&cood.y,(void*)&cood.z);
  return 0;
}

  
    
