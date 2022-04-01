#include <stdio.h>


int add(int a, int b) { 

    return a + b;
}


int main(void) {
  int a, b;
  
  printf("Informe o primeiro número: ");
  scanf("%i",&a);
  

  printf("Informe o segundo número: ");
  scanf("%i",&b);
  
  int result = add(a,b);
  printf("Resultado: %i",result);
  return 0;
}