#include<stdio.h>

int fatorial(int n){
  if(n==0||n==1)
  return 1;
  else
    return n * fatorial(n-1);
}

int main(){
  int n;
  scanf("%d",&n);
  fatorial(n);
  printf("Resultado:%d",fatorial(n));
}
