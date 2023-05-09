#include <stdio.h>

void salto_do_sapo(int quantidade,int v[],int distancia){
  int x[10] = {0,0,0,0,0,0,0,0,0,0};
  x[0] = v[0];
  int ultima_pos = v[0];
  int count = 1;
  for(int i = 1;i<quantidade;i++){
    if(v[i] - ultima_pos > distancia){
      ultima_pos = v[i-1];
      x[count] = v[i-1];
      count++;
    }
  }
  x[count] = v[quantidade];
  for(int i = 0;i<(quantidade/distancia);i++){
    printf("\n%i",x[i]);
  }
}


int main() {
  int quantidade = 10,v[10] = {1,2,3,4,5,6,7,8,9,10},distancia = 2;
  salto_do_sapo(quantidade,v,distancia);
}