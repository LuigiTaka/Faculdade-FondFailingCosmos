#include <stdio.h>


int fibonacci(int i) {

   if(i == 0) {
      return 0;
   }
	
   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}


int main(void) {
  
    int posicao = 0, resultado = 0;

    printf("Digite quantos números da sequência de fibonacci você gostaria hoje: ");
    scanf("%i", &posicao);

    printf("%i",posicao);
  
    return 0;
  
}

