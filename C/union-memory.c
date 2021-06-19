#include <stdio.h>
#include <string.h>

union Data{
  int i;
  float j;
  char str[8];
};

int main(){
  union Data dados;
  dados.i=1;
  printf("Data: i:%d\n",dados.i);
  dados.j=1.0;
  printf("Data: j:%f\n",dados.j);
  strcpy(dados.str,"Dados");
  printf("Dados Destridos depois char array\n");
  printf("Memory(%lu): i:%p, j:%p, str:%p\n",sizeof(dados),
	 (void*)&dados.i,(void*)&dados.j,(void*)&dados.str);
  printf("Data: i:%d, j:%f, str:%s\n",dados.i,dados.j,dados.str);
  
  dados.i=2;
  printf("Data: i:%d\n",dados.i);
  dados.j=2.0;
  printf("Data: j:%f\n",dados.j);
  dados.str[0] = 'G';
  printf("Memory(%lu): i:%p, j:%p, str:%p\n",sizeof(dados),
	 (void*)&dados.i,(void*)&dados.j,(void*)&dados.str);
  printf("Data: i:%d, j:%f, str:%s\n",dados.i,dados.j,dados.str);



  
  return 0;
}
